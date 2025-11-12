//
// Created by Miguel on 10/11/2025.
//

#ifndef RECEPTIONISTCONTAINER_H
#define RECEPTIONISTCONTAINER_H

#include <list>
#include "headers/domain/model/ReceptionistUser.h"
using namespace std;

class ReceptionistContainer {
private:
    std::list<ReceptionistUser> receptionists;

public:
    ReceptionistContainer();
    std::list<ReceptionistUser> getReceptionistList();

    void addReceptionist(ReceptionistUser receptionist);
};

#endif RECEPTIONISTCONTAINER_H
