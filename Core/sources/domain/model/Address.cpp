//
// Created by lucas on 10/11/2025.
//

#include <utility>

#include "headers/domain/shared/Address.h"

using namespace std;

Address::Address() {
    this->street = "";
    this->city = "";
    this->door_number = "";
    this->zip_code = "";
}
Address::Address(string street,string door_number, string zip_code, string city) {
    this->street = std::move(street);
    this->door_number = std::move(door_number);
    this->zip_code = std::move(zip_code);
    this->city = std::move(city);
}

string Address::getStreet() {
    return this->street;
}
void Address::setStreet(string street) {
    this->street = std::move(street);
}
string Address::getDoorNumber() {
    return this->door_number;
}
void Address::setDoorNumber(string door_number) {
    this->door_number = std::move(door_number);
}
string Address::getZipCode() {
    return this->zip_code;
}
void Address::setZipCode(string zip_code) {
    this->zip_code = zip_code;
}
string Address::getCity() {
    return this->city;
}
void Address::setCity(string city) {
    this->city = city;
}

bool Address::operator==(const Address &address) const {
    return this->street == address.street &&
            this->door_number == address.door_number &&
            this->zip_code == address.zip_code &&
            this->city == address.city;
}
