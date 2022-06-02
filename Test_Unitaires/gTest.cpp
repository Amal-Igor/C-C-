#include "gtest/gtest.h"
#include <ctype.h>
#include "Calculator.h"



TEST(Calculator, AdditionToutEstVrai)
{   
    Calculator c;
    //EXPECT_TRUE(c.add(8,9));
    //EXPECT_EQ(c.get_last_result(), 17);

    //EXPECT_TRUE(c.add(8, -9));
    //EXPECT_EQ(c.get_last_result(), -1);


    //EXPECT_TRUE(c.add(-5, -5));
    //EXPECT_EQ(c.get_last_result(), -10);
}

//TEST(Calculator, AdditionToutEstFaux)
//{
//    Calculator c;
//
//    EXPECT_FALSE(c.add(214748364552, 500));
//
//
//    EXPECT_FALSE(c.add(-2147483642, 15000));
//
//}

TEST(Calculator, add2)
{
    Calculator c;
    EXPECT_TRUE(c.add(6, 5));
    EXPECT_EQ(c.get_last_result(), 11);

    EXPECT_TRUE(c.add(0, 5));
    EXPECT_EQ(c.get_last_result(), 5);

    EXPECT_TRUE(c.add(6, 0));
    EXPECT_EQ(c.get_last_result(), 6);

    EXPECT_TRUE(c.add(6, -5));
    EXPECT_EQ(c.get_last_result(), 1);

    EXPECT_TRUE(c.add(-6, 5));
    EXPECT_EQ(c.get_last_result(), -1);

    EXPECT_FALSE(c.add(1500000000, 1500000000));
    EXPECT_FALSE(c.add(2500000000, 1500000000));

    EXPECT_FALSE(c.add(-1500000000, -1500000000));
    EXPECT_TRUE(c.add(-1500000000, 2000000000));
    EXPECT_TRUE(c.add(2000000000, -1500000000));
}

//TEST(Calculator, MultiplicationToutEstVrai)
//{
//    Calculator c;
//    EXPECT_TRUE(c.add(8, 9));
//    EXPECT_EQ(c.get_last_result(), 72);
//
//    EXPECT_TRUE(c.add(8, -9));
//    EXPECT_EQ(c.get_last_result(), -1);
//
//
//    EXPECT_TRUE(c.add(-5, -5));
//    EXPECT_EQ(c.get_last_result(), -10);
//}
//
//TEST(Calculator, AdditionToutEstFautx)
//{
//    Calculator c;
//    EXPECT_FALSE(c.add(8, 9));
//    EXPECT_EQ(c.get_last_result(), 49);
//
//    EXPECT_FALSE(c.add(8, -9));
//    EXPECT_EQ(c.get_last_result(), 20);
//
//
//    EXPECT_FALSE(c.add(-5, -5));
//    EXPECT_EQ(c.get_last_result(), -10);
//}
//
//TEST(Calculator, AdditionToutEstFautx)
//{
//    Calculator c;
//    EXPECT_FALSE(c.add(8, 9));
//    EXPECT_EQ(c.get_last_result(), 49);
//
//    EXPECT_FALSE(c.add(8, -9));
//    EXPECT_EQ(c.get_last_result(), 20);
//
//
//    EXPECT_FALSE(c.add(-5, -5));
//    EXPECT_EQ(c.get_last_result(), -10);
//}
//
//
//TEST(Calculator, AdditionToutEstFautx)
//{
//    Calculator c;
//    EXPECT_FALSE(c.add(8, 9));
//    EXPECT_EQ(c.get_last_result(), 49);
//
//    EXPECT_FALSE(c.add(8, -9));
//    EXPECT_EQ(c.get_last_result(), 20);
//
//
//    EXPECT_FALSE(c.add(-5, -5));
//    EXPECT_EQ(c.get_last_result(), -10);
//}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    return 0;
}