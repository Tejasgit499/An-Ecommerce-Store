#include "Customer.hpp"

Customer::Customer(int id , const std::string& name , const std::string& email )
    :id(id) , name(name) , email(email) {}

int Customer::getId() const {return id ;}
std::string Customer::getName() const {return name ;}
std::string Customer::getEmail() const {return email;}

void Customer::display() const {
    std::cout << "Customer Id : " << id << std::endl;
    std::cout << "Name :" << name << std::endl;
    std::cout << "Email" << email << std::endl;
}

