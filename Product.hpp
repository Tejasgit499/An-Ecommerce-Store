#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include <string>
#include <iostream>

class Product {
private:
    int id;
    std::string name;
    double price;

public:
    // Default constructor
    Product() : id(0), name(""), price(0.0) {}

    // Parameterized constructor
    Product(int id, const std::string& name, double price);

    // Getters
    int getId() const;
    std::string getName() const;
    double getPrice() const;

    // Display function
    void display() const;
};

#endif // PRODUCT_HPP
