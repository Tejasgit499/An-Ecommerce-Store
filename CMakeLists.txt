cmake_minimum_required(VERSION 3.10)

# Project name
project(ECommerceStore LANGUAGES CXX)

# Use C++11 standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Source files
set(SOURCES
    main.cpp
    Product.cpp
    Customer.cpp
    Order.cpp
    Store.cpp
)

# Create executable
add_executable(ecommerce_store ${SOURCES})

# Include headers
target_include_directories(ecommerce_store PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
