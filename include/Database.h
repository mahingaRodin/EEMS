#ifndef DATABASE_H
#define DATABASE_H

#include <pqxx/pqxx>
#include <vector>
#include "Employee.h"

class Database {
public:
    Database(const std::string& dbname, const std::string& user, const std::string& password);
    void addEmployee(const Employee& emp);
};

#endif //DATABASE_H