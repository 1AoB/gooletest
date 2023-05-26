#include <limits.h>
#include "sample1.h"
#include <gtest/gtest.h>
namespace
{

  TEST(FactorialTest, Negative)
  {
    // This test is named "Negative", and belongs to the "FactorialTest"
    // test case.
    EXPECT_EQ(1, Factorial(-5));
    EXPECT_EQ(1, Factorial(-1));
    EXPECT_GT(Factorial(-10), 0);
  }

  TEST(FactorialTest, Zero)
  {
    EXPECT_EQ(1, Factorial(0));
  }

  TEST(FactorialTest, Positive)
  {
    EXPECT_EQ(1, Factorial(1));
    EXPECT_EQ(2, Factorial(2));
    EXPECT_EQ(6, Factorial(3));
    EXPECT_EQ(40320, Factorial(8));
  }

  // Tests IsPrime()
  TEST(IsPrimeTest, Negative)
  {
    EXPECT_FALSE(IsPrime(-1));
    EXPECT_FALSE(IsPrime(-2));
    EXPECT_FALSE(IsPrime(INT_MIN));
  }

  TEST(IsPrimeTest, Trivial)
  {
    EXPECT_FALSE(IsPrime(0));
    EXPECT_FALSE(IsPrime(1));
    EXPECT_TRUE(IsPrime(2));
    EXPECT_TRUE(IsPrime(3));
  }

  TEST(IsPrimeTest, Positive)
  {
    EXPECT_FALSE(IsPrime(4));
    EXPECT_TRUE(IsPrime(5));
    EXPECT_FALSE(IsPrime(6));
    EXPECT_TRUE(IsPrime(23));
  }
} // namespace

// g++ sample1.cc sample_unittest.cc -lgtest -std=c++14 -lgtest_main -lpthread -o test1