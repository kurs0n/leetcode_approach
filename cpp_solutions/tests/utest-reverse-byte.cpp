#include "reverseByte.hpp" 
#include <gtest/gtest.h>

namespace
{
    TEST(ReverseByteSuite, firstSuite){
        uint8_t byte = 0b10000010;
        uint8_t expectedByte = 0b01000001;
        uint8_t reversedByte = reverseByte(byte); 
        EXPECT_EQ(reversedByte, expectedByte);
    }

    TEST(ReverseByteSuite, secondSuite){
        uint8_t byte = 0b10101011;
        uint8_t expectedByte = 0b11010101;
        uint8_t reversedByte = reverseByte(byte);
        EXPECT_EQ(reversedByte, expectedByte);
    }
}