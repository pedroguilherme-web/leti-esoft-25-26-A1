//
// Created by lucas on 11/11/2025.
//

#include "headers/domain/shared/Person.h"
#include <gtest/gtest.h>

using namespace std;

class PersonTests : public ::testing::Test {
protected:
    Person person_set;
    Person person_get;
    Address address;

    void SetUp() override {
        address = Address("Street", "Door Number", "Zip Code", "City");
        person_get = Person("Name", 998430765, "email@email.com", address);
        person_set = Person();
    }
    void TearDown() override {}
};

TEST_F(PersonTests, GetName) {
    string expected_name = "Name";
    EXPECT_EQ(expected_name, person_get.getName());
}
TEST_F(PersonTests, SetName) {
    string expected_name = "A name";
    person_set.setName(expected_name);
    EXPECT_EQ(expected_name, person_set.getName());
}
TEST_F(PersonTests, GetPhoneNumber) {
    int expected_phone_number = 998430765;
    EXPECT_EQ(expected_phone_number, person_get.getPhoneNumber());
}
TEST_F(PersonTests, SetPhoneNumber) {
    int expected_phone_number = 990894323;
    person_set.setPhoneNumber(expected_phone_number);
    EXPECT_EQ(expected_phone_number, person_set.getPhoneNumber());
}
TEST_F(PersonTests, GetEmail) {
    string expected_email = "email@email.com";
    EXPECT_EQ(expected_email, person_get.getEmail());
}
TEST_F(PersonTests, SetEmail) {
    string expected_email = "some@email.org";
    person_set.setEmail(expected_email);
    EXPECT_EQ(expected_email, person_set.getEmail());
}
TEST_F(PersonTests, GetAddress) {
    EXPECT_EQ(address, person_get.getAddress());
}
TEST_F(PersonTests, SetAddress) {
    person_set.setAddress(address);
    EXPECT_EQ(address, person_set.getAddress());
}