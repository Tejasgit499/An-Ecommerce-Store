
#include "Store.hpp"
#include <stdexcept>

void Store::addProduct(const Product& product) {
    products.insert({product.getId(), product});
}

void Store::addCustomer(const Customer& customer) {
    customers.insert({customer.getId(), customer});
}

void Store::placeOrder(int orderId, int customerId, const std::vector<int>& productIds) {
    if (usedOrderIds.find(orderId) != usedOrderIds.end()) {
        throw std::runtime_error("Order ID already exists!");
    }
    if (customers.find(customerId) == customers.end()) {
        throw std::runtime_error("Customer not found!");
    }

    Order order(orderId, customers.at(customerId));
    for (int pid : productIds) {
        if (products.find(pid) == products.end()) {
            throw std::runtime_error("Product ID " + std::to_string(pid) + " not found!");
        }
        order.addProduct(products.at(pid));
    }

    orders.insert({orderId, order});
    usedOrderIds.insert(orderId);
}

void Store::displayProducts() const {
    std::cout << "\n--- Product Catalog ---\n";
    for (const auto& pair : products) {
        pair.second.display();
    }
}

void Store::displayCustomers() const {
    std::cout << "\n--- Customer List ---\n";
    for (const auto& pair : customers) {
        pair.second.display();
    }
}

void Store::displayOrders() const {
    std::cout << "\n--- Orders ---\n";
    for (const auto& pair : orders) {
        pair.second.display();
        std::cout << "----------------------\n";
    }
}
