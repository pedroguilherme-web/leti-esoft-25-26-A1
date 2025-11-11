//
// Created by lucas on 11/11/2025.
//

#include "headers/domain/shared/NurseUser.h"
#include <gtest/gtest.h>

using namespace std;

class NurseUserTests : public ::testing::Test {
protected:
    NurseUser nurse_set;
    NurseUser nurse_get;

    void SetUp() override {
        nurse_get = NurseUser(1109);
        nurse_set = NurseUser();
    }
    void TearDown() override {}
};

TEST_F(NurseUserTests, GetNurseID) {
    int nurse_id = 1109;
    EXPECT_EQ(nurse_id, nurse_get.getNurseID());
}
TEST_F(NurseUserTests, SetNurseID) {
    int nurse_id = 9870;
    nurse_set.setNurseID(nurse_id);
    EXPECT_EQ(nurse_id, nurse_set.getNurseID());
}