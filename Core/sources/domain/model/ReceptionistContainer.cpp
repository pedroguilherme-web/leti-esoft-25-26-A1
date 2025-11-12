//
// Created by Miguel on 11/11/2025.
//

#include "headers/domain/shared/ReceptionistContainer.h"

using namespace std;

ReceptionistContainer::ReceptionistContainer() {
    this->receptionists = {};
}

std::list<ReceptionistUser> ReceptionistContainer::getReceptionistList() {
    return this->receptionists;
}

