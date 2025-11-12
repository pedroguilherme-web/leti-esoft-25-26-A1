//
// Created by lucas on 11/10/25.
//

#ifndef DGSADMINUSER_H
#define DGSADMINUSER_H
#include "../shared/Person.h"

class DGSAdminUser : public Person {
private:
    int admin_id;
public:
    DGSAdminUser();
    DGSAdminUser(int admin_id);
    int getAdminID();
    void setAdminID(int admin_id);

};

#endif //DGSADMINUSER_H