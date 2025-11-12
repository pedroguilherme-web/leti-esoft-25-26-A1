//
// Created by Miguel on 11/11/2025.
//

#include "headers/domain/shared/NurseContainer.h"
#include "headers/domain/shared/NurseUser.h"
#include "headers/domain/shared/Person.h"
#include "headers/domain/shared/Address.h"
#include <gtest/gtest.h>

using namespace std;

class NurseContainerTests : public ::testing::Test {
protected:
    NurseContainer nurses;

    Address address;
    Person miguel;
    NurseUser enfermeiro_miguel;
    Person lucas;
    NurseUser enfermeiro_lucas;

    void SetUp() override {
        address = Address("R. Dr. António Bernardino de Almeida" ,"431", "4249-015" , "Porto");
        miguel = Person("Enfermeiro Miguel", 910847264 , "miguel@gmail.com", address);
        enfermeiro_miguel = NurseUser(1);
        lucas = Person("Enfermeiro Lucas", 912345678 , "lucas@gmail.com", address);
        enfermeiro_lucas = NurseUser(2);
    }

    void TearDown() override {}
};

TEST_F(NurseContainerTests, IsEmptyWhenCreated) {
    ASSERT_TRUE(nurses.getNurseList().empty());
    ASSERT_EQ(nurses.getNurseList().size(), 0);
}
