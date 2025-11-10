//
// Created by lucas on 10/11/2025.
//

#include "headers/domain/shared/NurseUser.h"

using namespace std;

NurseUser::NurseUser() {
    this->nurse_id = -1;
}
NurseUser::NurseUser(int nurse_id) {
    this->nurse_id = nurse_id;
}

int NurseUser::getNurseID() {
    return this->nurse_id;
}
void NurseUser::setNurseID(int nurse_id) {
    this->nurse_id = nurse_id;
}