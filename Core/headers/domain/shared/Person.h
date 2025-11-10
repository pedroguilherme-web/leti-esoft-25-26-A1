//
// Created by lucas on 11/10/25.
//

#ifndef PERSON_H
#define PERSON_H
#include <string>

#include "Address.h"

using namespace std;

class Person {
protected:
    string name;
    int phone_number;
    string email;
    Address adress;

public:
    Person();
    Person(string name, int phone_number, string email, Address address);
    string getName();
    void setName(string name);
    int getPhoneNumber();
    void setPhoneNumber(int phone_number);
    string getEmail();
    void setEmail(string email);
    Address getAddress();
    void setAddress(Address address);
};

#endif //PERSON_H