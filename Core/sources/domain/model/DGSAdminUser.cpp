//
// Created by lucas on 10/11/2025.
//

#include "headers/domain/shared/DGSAdminUser.h"

using namespace std;

DGSAdminUser::DGSAdminUser() {
    this->admin_id = -1;
}
DGSAdminUser::DGSAdminUser(int admin_id) {
    this->admin_id = admin_id;
}

int DGSAdminUser::getAdminID() {
    return this->admin_id;
}
void DGSAdminUser::setAdminID(int admin_id) {
    this->admin_id = admin_id;
}