#include <gtest/gtest.h>

TEST(SimpleTest, BasicTest) {
  EXPECT_EQ(1 + 1, 2);
}

TEST(SimpleTest, StringTest) {
  std::string str = "Hello";
  EXPECT_EQ(str, "Hello");
}

int main(int argc, char ** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
