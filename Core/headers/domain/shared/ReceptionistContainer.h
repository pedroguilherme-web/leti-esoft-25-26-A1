//
// Created by Miguel on 10/11/2025.
//

#ifndef RECEPTIONISTCONTAINER_H
#define RECEPTIONISTCONTAINER_H

#include <list>
#include "ReceptionistUser.h"
using namespace std;

class ReceptionistContainer {
private:
    std::list<ReceptionistUser> receptionists;

public:
    ReceptionistContainer();
    std::list<ReceptionistUser> getReceptionistList();
};

#endif RECEPTIONISTCONTAINER_H
