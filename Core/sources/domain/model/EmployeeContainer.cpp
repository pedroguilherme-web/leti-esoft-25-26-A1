//
// Created by miguel on 12/11/2025.
//

#include "headers/domain/model/EmployeeContainer.h"

EmployeeContainer::EmployeeContainer() {
    this->employees = {};
}

list<Employee> EmployeeContainer::getEmployeeList() {
    return this->employees;
}

list<Employee> EmployeeContainer::getNurseList() {
    list<Employee> nurses;

    for (Employee employee : this->employees) {
         if (employee.getType() == NURSE) {
            nurses.push_back(employee);
        }
    }
    return nurses;
}

list<Employee> EmployeeContainer::getReceptionistList() {
    list<Employee> receptionists;

    for (Employee employee : this->employees) {
        if (employee.getType() == RECEPTIONIST) {
            receptionists.push_back(employee);
        }
    }
    return receptionists;
}

void EmployeeContainer::addEmployee(Employee employee) {
    this->employees.push_back(employee);
}