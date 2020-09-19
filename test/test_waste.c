#include "unity.h"
#include "factorial.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test1(void)
{
  TEST_ASSERT_EQUAL(1, check("wet"));
  TEST_ASSERT_EQUAL(2, check("metal"));
}
void test2(void)
{
  TEST_ASSERT_EQUAL(3, check("paper"));
  TEST_ASSERT_EQUAL(4, check("plastic"));
}
void test3(void)
{
  TEST_ASSERT_EQUAL(3, check("wood"));
  TEST_ASSERT_EQUAL(4, check("cloth"));
}
void test4(void)
{
  TEST_ASSERT_EQUAL(0, checkbin(70));
  TEST_ASSERT_EQUAL(1, checkbin(90));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test1);
  RUN_TEST(test2);
  RUN_TEST(test3);
  RUN_TEST(test4);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
