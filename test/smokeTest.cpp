#include <Arduino.h>
#include <unity.h>

void test_suite_should_compile(void)
{
  TEST_ASSERT_TRUE(true);
}

int runUnityTests(void)
{
  UNITY_BEGIN();
  RUN_TEST(test_suite_should_compile);
  return UNITY_END();
}

void setup()
{
  delay(2000);
  runUnityTests();
}

void loop() {}