//
// Created by lucas on 10/11/2025.
//

#include "headers/domain/shared/Person.h"

using namespace std;

Person::Person() {
    this->name = "";
    this->phone_number = 0;
    this->email = "";
}
Person::Person(std::string name, int phone_number, std::string email, Address address) {
    this->name = name;
    this->phone_number = phone_number;
    this->email = email;
    this->address = address;
}

string Person::getName() {
    return this->name;
}
void Person::setName(string name) {
    this->name = name;
}
int Person::getPhoneNumber() {
    return this->phone_number;
}
void Person::setPhoneNumber(int phone_number) {
    this->phone_number = phone_number;
}
string Person::getEmail() {
    return this->email;
}
void Person::setEmail(string email) {
    this->email = email;
}
Address Person::getAddress() {
    return this->address;
}
void Person::setAddress(Address address) {
    this->address = address;
}