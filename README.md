🛒 E-Commerce Store (C++ Mini Project)

📌 Overview
This is a mini-project built in C++ to demonstrate:
- Basics of C++ (functions, classes, loops, conditionals)
- Object-Oriented Programming (OOP) principles:
  - Encapsulation
  - Composition
  - Polymorphism (via display functions)
- Standard Template Library (STL) usage:
  - `vector`, `map`, `set`
- Error handling with `try-catch` and `std::runtime_error`
- The overall concepts of C++ are implemented

The project simulates a simple E-Commerce Store where:
- Products can be added
- Customers can be registered
- Orders can be placed
- Store data can be displayed

## 📂 Project Structure
/ECommerceStore
│── Product.hpp
│── Product.cpp
│── Customer.hpp
│── Customer.cpp
│── Order.hpp
│── Order.cpp
│── Store.hpp
│── Store.cpp
│── main.cpp
│── README.md

⚙️ Features
- Product Management: Add and list products.
- Customer Management: Add and list customers.
- Order Management: Place orders, calculate totals, and display order details.
- Error Handling: Prevent duplicate order IDs, invalid customers, and missing products.
- STL Containers:
  - `map` → Store products, customers, and orders
  - `vector` → Store products in an order
  - `set` → Track used order IDs


🚀 How to Compile & Run
1. Open terminal in the project folder.
2. Compile all `.cpp` files together:
   ```bash
   g++ main.cpp Product.cpp Customer.cpp Order.cpp Store.cpp -o ecommerce_store 
