//
// Created by lucas on 11/10/25.
//

#ifndef RECEPTIONISTUSER_H
#define RECEPTIONISTUSER_H
#include "Person.h"

class ReceptionistUser : Person {
private:
    int receptionist_id;
public:
    ReceptionistUser();
    ReceptionistUser(int receptionist_id);
    int getReceptionistID();
    void setReceptionistID(int receptionist_id);
};

#endif //RECEPTIONISTUSER_H