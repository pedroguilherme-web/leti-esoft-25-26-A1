//
// Created by lucas on 11/10/25.
//

#ifndef NURSEUSER_H
#define NURSEUSER_H
#include "headers/domain/model//Person.h"

class NurseUser : public Person {
private:
    int nurse_id;
public:
    NurseUser();
    NurseUser(int nurse_id);
    int getNurseID();
    void setNurseID(int id);
};


#endif //NURSEUSER_H