//
// Created by migue on 12/11/2025.
//

#ifndef EMPLOYEECONTAINER_H
#define EMPLOYEECONTAINER_H

#include <list>
#include "headers/domain/model/Employee.h"
using namespace std;

class EmployeeContainer {
private:
    list<Employee> employees;
}

public:
    EmployeeContainer();
    list<Employee> getEmployeeList();

    void addEmployee(Employee employee);
};

#endif EMPLOYEECONTAINER_H
