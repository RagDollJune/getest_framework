#include <gtest/gtest.h>
#include <stdexcept>

TEST(SomeTest, ABasicTest1) {
  EXPECT_EQ(1, 1);
}

TEST(SomeTest, ABasicTest2) {
  EXPECT_EQ(1, 1);
}


void CreateObj()
{
    // try {
        throw std::logic_error("logic error");
    // } catch (std::exception &e) {

    // }
}

TEST(SomeTest, ABasicTest3) {
    //EXPECT_NO_THROW(CreateObj());
//    s td::exception e = std::logic_error("logic error");
    EXPECT_THROW(CreateObj(), std::logic_error);
}
