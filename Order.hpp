//Header file for order function
#ifndef ORDER_HPP
#define ORDER_HPP

#include <vector>
#include <iostream>
#include "Product.hpp"
#include "Customer.hpp"

class Order {
private:
    int orderId;
    Customer customer;
    std::vector<Product> products;

public:
    // Default constructor
    Order() : orderId(0), customer() {}

    // Parameterized constructor
    Order(int orderId, const Customer& customer);

    // Add product to order
    void addProduct(const Product& product);

    // Getters
    int getOrderId() const;
    Customer getCustomer() const;
    std::vector<Product> getProducts() const;

    // Display order details
    void display() const;

    // Calculate total price
    double calculateTotal() const;
};

#endif // ORDER_HPP
