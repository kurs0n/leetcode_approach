#include "palindrome.hpp"
#include <gtest/gtest.h>

namespace
{
    TEST(PalindromeTestSuite, validPalindrome)
    {
        Solution s;
        EXPECT_EQ(s.isPalindrome("Was it a car or a cat I saw?"), true);
    }
    TEST(PalindromeTestSuite, invalidPalindrome)
    {
        Solution s;
        EXPECT_EQ(s.isPalindrome("tab a cat"), false);
    }
    TEST(PalindromeTestSuite, validPalindromeWithAlphahumericValues)
    {
        Solution s;
        EXPECT_EQ(s.isPalindrome("Madam, in Eden, I'm Adam"), true);
    }
}