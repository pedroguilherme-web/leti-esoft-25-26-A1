//
// Created by Miguel on 11/11/2025.
//

#include "headers/domain/model/NurseContainer.h"

NurseContainer::NurseContainer() {
    this->nurses = {};
}

std::list<NurseUser> NurseContainer::getNurseList() {
    return this->nurses;
}

void NurseContainer::addNurse(NurseUser nurse) {
    this->nurses.push_back(nurse);
}


