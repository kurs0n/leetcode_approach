#include <gtest/gtest.h>

extern "C" { 
  #include "hello.h"
}

TEST (HelloTestSuite, MaxTest) {
  EXPECT_EQ (max (1, 2), 2);
  EXPECT_EQ (max (2, 1), 2);
  EXPECT_EQ (max (1, 1), 1);
}

TEST (HelloTestSuite, PrintHelloTest) {
  testing::internal::CaptureStdout ();
  print_hello (0);
  EXPECT_STREQ (testing::internal::GetCapturedStdout ().c_str (), "");

  testing::internal::CaptureStdout ();
  print_hello (1);
  EXPECT_STREQ (testing::internal::GetCapturedStdout ().c_str (),
                "Hello World!\n");

  testing::internal::CaptureStdout ();
  print_hello (2);
  EXPECT_STREQ (testing::internal::GetCapturedStdout ().c_str (),
                "Hello World!\nHello World!\n");

  testing::internal::CaptureStdout ();
  print_hello (-1);
  EXPECT_STREQ (testing::internal::GetCapturedStdout ().c_str (), "");
}