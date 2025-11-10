//
// Created by lucas on 11/10/25.
//

#ifndef ADDRESS_H
#define ADDRESS_H
#include <string>

using namespace std;

class Address {
private:
    string street;
    string door_number;
    string zip_code;
    string city;
public:
    Address();
    Address(string street, string door_number, string zip_code, string city);
    string getStreet();
    void setStreet(string street);
    string getDoorNumber();
    void setDoorNumber(string door_number);
    string getZipCode();
    void setZipCode(string zip_code);
    string getCity();
    void setCity(string city);
};

#endif //ADDRESS_H