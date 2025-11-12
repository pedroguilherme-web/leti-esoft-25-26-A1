//
// Created by lucas on 11/11/2025.
//

#include "headers/domain/shared/DGSAdminUser.h"
#include <gtest/gtest.h>

using namespace std;

class DGSAdminUserTests : public ::testing::Test {
protected:
    DGSAdminUser admin_set;
    DGSAdminUser admin_get;

    void SetUp() override {
        admin_get = DGSAdminUser(1109);
        admin_set = DGSAdminUser();
    }
    void TearDown() override {}
};

TEST_F(DGSAdminUserTests, GetAdminID) {
    int expected_admin_id = 1109;
    EXPECT_EQ(expected_admin_id, admin_get.getAdminID());
}
TEST_F(DGSAdminUserTests, SetAdminID) {
    int expected_admin_id = 9870;
    admin_set.setAdminID(expected_admin_id);
    EXPECT_EQ(expected_admin_id, admin_set.getAdminID());
}