#include "gtest/gtest.h"
#include"B/lib.h"
#include"A/index.h"

TEST(firstTest, tryingNumberOne){
    EXPECT_EQ(increment(),6);
}

TEST(secondTest, tryingNumberTwo){
    EXPECT_EQ(myFunctionForLib(),8);
}