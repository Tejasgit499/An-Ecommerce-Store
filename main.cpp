#include<iostream>
#include"Store.hpp"

int main() {
    Store store ;

    try {
        //Add products
        store.addProduct(Product(1, "Laptop " , 75000.0));
        store.addProduct(Product(2, "SmartPhones" , 30000.0));
        store.addProduct(Product(3, "Headphones" , 2000.0));

        //Add customers
        store.addCustomer(Customer(101, "Rajesh" , "rajesh24@gmail.com"));
        store.addCustomer(Customer(102, "Ram" , "ram32@gmail.com"));

        //Display Products and Customers
        store.displayProducts();
        store.displayCustomers();

        //Place Order
        store.placeOrder(5001 , 101 , {1,4});
        store.placeOrder(5002 , 102 , {2});

        //Display Orders
        store.displayOrders();

        //Error Handling
        store.placeOrder(5001 , 102 , {2});

    } catch (const std::exception& a){
        std::cerr << "\nError : " << a.what() << std::endl;
    }

    return 0 ;

}