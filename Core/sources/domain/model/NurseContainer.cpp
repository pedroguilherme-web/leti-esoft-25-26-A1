//
// Created by Miguel on 11/11/2025.
//

#include "headers/domain/shared/NurseContainer.h"

NurseContainer::NurseContainer() {
    this->nurses = {};
}

std::list<NurseUser> NurseContainer::getNurseList() {
    return this->nurses;
}
