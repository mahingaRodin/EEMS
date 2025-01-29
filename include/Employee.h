#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
private:
    int id;
    std::string name;
    std::string position;
    double salary;

public:
    Employee(int id, const std::string& name, const std::string& position, double salary);
    void displayInfo() const;
};

#endif // EMPLOYEE_H