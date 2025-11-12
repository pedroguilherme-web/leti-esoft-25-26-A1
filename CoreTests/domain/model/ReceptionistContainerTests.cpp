//
// Created by Miguel on 11/11/2025.
//

#include "headers/domain/shared/ReceptionistContainer.h"
#include "headers/domain/shared/ReceptionistUser.h"
#include "headers/domain/shared/Person.h"
#include "headers/domain/shared/Address.h"
#include <gtest/gtest.h>

using namespace std;

class ReceptionistContainerTests : public ::testing::Test {
protected:
    ReceptionistContainer receptionists;

    Address address;
    Person miguel;
    ReceptionistUser recepcionista_miguel;
    Person lucas;
    ReceptionistUser recepcionista_lucas;

    void SetUp() override {
        address = Address("R. Dr. António Bernardino de Almeida" ,"431", "4249-015" , "Porto");
        miguel = Person("Enfermeiro Miguel", 910847264 , "miguel@gmail.com", address);
        recepcionista_miguel = ReceptionistUser(1);
        lucas = Person("Enfermeiro Lucas", 912345678 , "lucas@gmail.com", address);
        recepcionista_lucas = ReceptionistUser(2);
    }

    void TearDown() override {}
};

TEST_F(ReceptionistContainerTests, IsEmptyWhenCreated) {
    ASSERT_TRUE(receptionists.getReceptionistList().empty());
    ASSERT_EQ(receptionists.getReceptionistList().size(), 0);
}