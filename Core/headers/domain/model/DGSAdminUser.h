//
// Created by lucas on 11/10/25.
//

#ifndef DGSADMINUSER_H
#define DGSADMINUSER_H
#include "../model/Employee.h"

class DGSAdminUser : public Employee {
private:
    int admin_id;
public:
    DGSAdminUser();
    DGSAdminUser(int admin_id);
    int getAdminID();
    void setAdminID(int admin_id);

};

#endif //DGSADMINUSER_H