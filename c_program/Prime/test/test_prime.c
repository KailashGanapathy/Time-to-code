/// @file test_prime.c 

#include "unity.h"
#include "prime.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/// @see prime.c
/**
* This Function Check for Prime Number
* @note Return 1 If the input number is a Prime Number
*/

void test_prime(void)
{
  TEST_ASSERT_EQUAL(1, prime(11));
  TEST_ASSERT_EQUAL(1, prime(103));
  TEST_ASSERT_EQUAL(1, prime(1093));
  TEST_ASSERT_EQUAL(1, prime(61));
  TEST_ASSERT_EQUAL(1, prime(991));
  TEST_ASSERT_EQUAL(1, prime(89));
}

/**
* This Function Check for Composite Number
* @note Return 0 If the input number is a composite Number
*/

void test_composite(void)
{
  TEST_ASSERT_EQUAL(0, prime(6));
  TEST_ASSERT_EQUAL(0, prime(18));
  TEST_ASSERT_EQUAL(0, prime(118));
  TEST_ASSERT_EQUAL(0, prime(824));
  TEST_ASSERT_EQUAL(0, prime(96));
  TEST_ASSERT_EQUAL(0, prime(1000));
}

/**
* This Function Check for Neither prime nor composite Number
* @note Return -1 If the input number is neither prime nor composite
*/

void test_onezero(void)
{
  TEST_ASSERT_EQUAL(-1, prime(0));
  TEST_ASSERT_EQUAL(-1, prime(1));
}

/**
* This Function Check whether the number is negative number input 
* @note Return -1 If the input number is a negative number
*/

void test_negative(void)
{
  TEST_ASSERT_EQUAL(-1, prime(-47));
  TEST_ASSERT_EQUAL(-1, prime(-100));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_prime);
  RUN_TEST(test_composite);
  RUN_TEST(test_onezero);
  RUN_TEST(test_negative);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
