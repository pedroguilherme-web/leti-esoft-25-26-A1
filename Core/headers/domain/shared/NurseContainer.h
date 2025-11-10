//
// Created by Miguel on 10/11/2025.
//

#ifndef NURSECONTAINER_H
#define NURSECONTAINER_H

#include <list>
#include "NurseUser.h"
using namespace std;

class NurseContainer {
private:
    std::list<NurseUser> nurses;

public:
    NurseContainer();
    std::list<NurseUser> getNurseList();
};

#endif NURSECONTAINER_H
