#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "add.hpp"
#include "op.hpp"
TEST(AddTest, WhatsNinePlusTen) {
    Op* test0 = new Op(9);
    Op* test1 = new Op(10);
    Add* test2 = new Add(test0, test1);
    EXPECT_EQ(test2->evaluate(), 19);
}

TEST(AddTest, WhatsNinePlusTenString) {
    Op* test0 = new Op(9);
    Op* test1 = new Op(10);
    Add* test2 = new Add(test0, test1);
    EXPECT_EQ(test2->stringify(), "9 + 10");
}

#endif //__OP_TEST_HPP__

