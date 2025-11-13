//
// Created by lucas on 11/10/25.
//

#ifndef PERSON_H
#define PERSON_H
#include <string>

#include "Address.h"

using namespace std;

enum EmployeeType {
    NURSE = 0,
    RECEPTIONIST = 1,
    ADMIN = 2,
};

class Employee {
protected:
    EmployeeType type;
    static int employee_id;
    string name;
    int phone_number;
    string email;
    Address address;

public:
    Employee();
    Employee(EmployeeType type, string name, int phone_number, string email, Address address);
    int getType() const;
    void setType(EmployeeType type);
    int getID() const;
    void setID(int id);
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