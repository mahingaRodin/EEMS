#include "../include/Employee.h"
#include <iostream>

Employee::Employee(int id, const std::string& name, const std::string& position, double salary)
        : id(id), name(name), position(position), salary(salary) {}

void Employee::displayInfo() const {
    std::cout << "ID: " << id << "\nName: " << name << "\nPosition: " << position << "\nSalary: $" << salary << "\n";
}
