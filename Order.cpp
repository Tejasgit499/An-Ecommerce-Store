#include "Order.hpp"

Order::Order(int orderId, const Customer& customer)
    : orderId(orderId), customer(customer) {}

void Order::addProduct(const Product& product) {
    products.push_back(product);
}

int Order::getOrderId() const { return orderId; }
Customer Order::getCustomer() const { return customer; }
std::vector<Product> Order::getProducts() const { return products; }

void Order::display() const {
    std::cout << "Order ID: " << orderId << std::endl;
    customer.display();
    std::cout << "Products in Order:" << std::endl;
    for (const auto& product : products) {
        product.display();
    }
    std::cout << "Total Price: $ " << calculateTotal() << std::endl;
}

double Order::calculateTotal() const {
    double total = 0.0;
    for (const auto& product : products) {
        total += product.getPrice();
    }
    return total;
}
