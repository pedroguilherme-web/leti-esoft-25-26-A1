//
// Created by lucas on 11/11/2025.
//

#include "headers/domain/shared/ReceptionistUser.h"
#include <gtest/gtest.h>

using namespace std;

class ReceptionistUserTests : public ::testing::Test {
protected:
    ReceptionistUser receptionist_set;
    ReceptionistUser receptionist_get;

    void SetUp() override {
        receptionist_get = ReceptionistUser(1109);
        receptionist_set = ReceptionistUser();
    }
    void TearDown() override {}
};

TEST_F(ReceptionistUserTests, GetReceptionistID) {
    int receptionist_id = 1109;
    EXPECT_EQ(receptionist_id, receptionist_get.getReceptionistID());
}
TEST_F(ReceptionistUserTests, SetReceptionistID) {
    int receptionist_id = 9870;
    receptionist_set.setReceptionistID(receptionist_id);
    EXPECT_EQ(receptionist_id, receptionist_set.getReceptionistID());
}