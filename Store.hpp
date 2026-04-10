#ifndef STORE_HPP
#define STORE_HPP

#include <map>
#include <set>
#include <vector>
#include <iostream>
#include "Product.hpp"
#include "Customer.hpp"
#include "Order.hpp"

class Store {
private:
    std::map<int, Product> products;      // Product catalog
    std::map<int, Customer> customers;    // Customer database
    std::map<int, Order> orders;          // Orders placed
    std::set<int> usedOrderIds;           // Track used order IDs

public:
    // Add product
    void addProduct(const Product& product);

    // Add customer
    void addCustomer(const Customer& customer);

    // Place order
    void placeOrder(int orderId, int customerId, const std::vector<int>& productIds);

    // Display all products
    void displayProducts() const;

    // Display all customers
    void displayCustomers() const;

    // Display all orders
    void displayOrders() const;
};

#endif // STORE_HPP
