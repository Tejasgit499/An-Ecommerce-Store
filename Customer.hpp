#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <string>
#include <iostream>

class Customer {
private:
    int id;
    std::string name;
    std::string email;

public:
    // Default constructor
    Customer() : id(0), name(""), email("") {}

    // Parameterized constructor
    Customer(int id, const std::string& name, const std::string& email);

    // Getters
    int getId() const;
    std::string getName() const;
    std::string getEmail() const;

    // Display function
    void display() const;
};

#endif // CUSTOMER_HPP
