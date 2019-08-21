#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h> // testing::Eq

TEST(XfsCustomBioTest, CreateCustomBioInstance)
{
    using testing::Eq;

    EXPECT_EQ(1, 1);
    char *p = nullptr;
    ASSERT_THAT(p, Eq(nullptr));
}

//using namespace testing;

int main(int argc, char *argv[])
{
    using testing::InitGoogleTest;

    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
