//
// Created by lucas on 10/11/2025.
//

#include <utility>

#include "headers/domain/model/Employee.h"

using namespace std;

Employee::Employee() {
    this->type = NURSE;
    employee_id = employee_id++;
    this->name = "";
    this->phone_number = 0;
    this->email = "";
    this->address = Address();
}
Employee::Employee(EmployeeType type, string name, int phone_number, string email, Address address) {
    this->type = type;
    employee_id = employee_id++;
    this->name = std::move(name);
    this->phone_number = phone_number;
    this->email = std::move(email);
    this->address = std::move(address);
}

int Employee::getType() const {
    return this->type;
}
void Employee::setType(EmployeeType type) {
    this->type = type;
}
int Employee::getID() const {
    return employee_id;
}
void Employee::setID(int id) {
    employee_id = id;
}
string Employee::getName() {
    return this->name;
}
void Employee::setName(string name) {
    this->name = std::move(name);
}
int Employee::getPhoneNumber() {
    return this->phone_number;
}
void Employee::setPhoneNumber(int phone_number) {
    this->phone_number = phone_number;
}
string Employee::getEmail() {
    return this->email;
}
void Employee::setEmail(string email) {
    this->email = std::move(email);
}
Address Employee::getAddress() {
    return this->address;
}
void Employee::setAddress(Address address) {
    this->address = std::move(address);
}