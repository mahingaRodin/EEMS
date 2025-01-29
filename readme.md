# Enterprise Employee Management System (EEMS)

## Overview

The **Enterprise Employee Management System (EEMS)** is a C++-based application designed to manage employee records efficiently in a company. It includes features such as employee data storage, payroll management, attendance tracking, and performance evaluation. The system integrates with **PostgreSQL/MySQL** for data persistence and uses **Modern C++ (C++17/20)** with multi-threading and encryption.

## Features

- Employee record management (CRUD operations)
- Payroll processing
- Attendance tracking system
- Department and role-based access control
- Authentication with encryption
- Database integration (PostgreSQL/MySQL)
- Multi-threading support for performance optimization

## Technologies Used

- **C++ 20**
- **PostgreSQL/MySQL** (Database)
- **CMake** (Build System)
- **nlohmann/json** (JSON Parsing)
- **pthread** (Multithreading)
- **OpenSSL** (Encryption)
- **CLion** (IDE for development)

## Setup Instructions

### Prerequisites

1. Install **CLion** from [JetBrains](https://www.jetbrains.com/clion/)
2. Install **C++ Compiler** (GCC, Clang, or MSVC)
3. Install **CMake**
4. Install **PostgreSQL** (or MySQL) and create a database

### Build & Run

1. Clone the repository:
   ```sh
   git clone https://github.com/mahingaRodin/EnterpriseEmployeeManagementSystem.git
   cd EnterpriseEmployeeManagementSystem
   ```
2. Configure CMake:
   ```sh
   cmake .
   ```
3. Build the project:
   ```sh
   make
   ```
4. Run the application:
   ```sh
   ./EEMS
   ```

## Future Enhancements

- Implement a **Graphical User Interface (GUI)** using Qt
- Develop a **REST API** for web-based integration
- Add **automated reporting and analytics**

## Contributing

Contributions are welcome! Please fork the repository and submit a pull request.
