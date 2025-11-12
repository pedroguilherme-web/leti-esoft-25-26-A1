//
// Created by lucas on 10/11/2025.
//

#include "headers/domain/shared/ReceptionistUser.h"

using namespace std;

ReceptionistUser::ReceptionistUser() {
    this->receptionist_id = -1;
}
ReceptionistUser::ReceptionistUser(int receptionist_id) {
    this->receptionist_id = receptionist_id;
}

int ReceptionistUser::getReceptionistID() {
    return this->receptionist_id;
}
void ReceptionistUser::setReceptionistID(int receptionist_id) {
    this->receptionist_id = receptionist_id;
}