#include "Product.hpp"

Product::Product(int id, const std::string& name , double price)
    : id(id) , name(name) , price(price) {}

int Product::getId() const {return id ;}
std::string Product::getName() const {return name;}
double Product::getPrice() const {return price;}

void Product::display() const {
    std::cout << "Product ID : " << id << std::endl;
    std::cout << "Name : " << name << std::endl;
    std::cout << "Price " << price << std::endl;
}