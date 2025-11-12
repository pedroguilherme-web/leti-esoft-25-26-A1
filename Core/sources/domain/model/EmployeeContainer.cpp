//
// Created by migue on 12/11/2025.
//

#include "headers/domain/model/EmployeeContainer.h"

EmployeeContainer::EmployeeContainer() {
    this->employees = {};
}

list<Employee> EmployeeContainer::getEmployeeList() {
    return this->employees;
}

void EmployeeContainer::addEmployee(Employee employee) {
    this->employees.push_back(employee);
}
