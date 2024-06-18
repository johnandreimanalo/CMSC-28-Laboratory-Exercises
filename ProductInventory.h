/* Programming Exercise 07 - Inheritance and Encapsulation
        Programmed by: John Andrei Manalo
        Date: May 24, 2024
    - this code defines a class hierarchy for managing products in an inventory. The base class 'Product' contains general attributes with corresponding getter and setter methods.
    Derived classes 'Clothing' and 'Electronics' inherit from `Product` and extend it with additional attributes specific to clothing and electronics, along with respective getter 
    and setter methods as well. */

#include <iostream>
#include <string>

using namespace std;

// Product as base class
class Product {
protected:
    string Name;
    string Brand;
    float Price;
    int Quantity;
    string Description;
    string Category;

public:
    // Default constructor
    Product() {}

    // Parameterized constructor
    Product(string name, string brand, float price, int quantity, string description, string category) {
        Name = name;
        Brand = brand;
        Price = price;
        Quantity = quantity;
        Description = description;
        Category = category;
    }

    // getters for general attributes
    string getName() {
        return Name;
    }
    string getBrand() {
        return Brand;
    }
    float getPrice() {
        return Price;
    }
    int getQuantity() {
        return Quantity;
    }
    string getDescription() {
        return Description;
    }
    string getCategory() {
        return Category;
    }

    // setters for general attributes
    void setName(string name) {
        Name = name;
    }
    void setBrand(string brand) {
        Brand = brand;
    }
    void setPrice(float price) {
        if (price < 0){
            cout << "You have entered an invalid input, please try again!" << endl;
        }
        Price = price;
    }
    void setQuantity(int quantity) {
        if (quantity <= 0){
            cout << "You have entered an invalid input, please try again!" << endl;
            return;
        }
        Quantity = quantity;
    }
    void setDescription(string description) {
        Description = description;
    }
    void setCategory(string category) {
        Category = category;
    }
};

// Clothing as derived class from Product
class Clothing : public Product {
private:
    string Size;
    string Color;
    string Material;

public:
    // Default constructor
    Clothing() {}

    // Parameterized constructor
    Clothing(string name, string brand, float price, int quantity, string description, string category, string size, string color, string material)
        : Product(name, brand, price, quantity, description, category) {
        Size = size;
        Color = color;
        Material = material;
    }

    // getters for specific attributes of Clothing
    string getSize() {
        return Size;
    }
    string getColor() {
        return Color;
    }
    string getMaterial() {
        return Material;
    }

    // setters for specific attributes of Clothing
    void setSize(string size) {
        Size = size;
    }
    void setColor(string color) {
        Color = color;
    }
    void setMaterial(string material) {
        Material = material;
    }
};

// Electronics as derived class from Product
class Electronics : public Product {
private:
    string Model;
    float Warranty; // in years
    string TechnicalSpecifications;

public:
    // Default constructor
    Electronics() {}

    // Parameterized constructor
    Electronics(string name, string brand, float price, int quantity, string description, string category, string model, float warr, string tech_specs)
        : Product(name, brand, price, quantity, description, category) {
        Model = model;
        Warranty = warr;
        TechnicalSpecifications = tech_specs;
    }
    
    // getters for specific attributes of Electronics
    string getModel() {
        return Model;
    }
    float getWarranty() {
        return Warranty;
    }
    string getTechnicalSpecifications() {
        return TechnicalSpecifications;
    }

    // setters for specific attributes of Electronics
    void setModel(string model) {
        Model = model;
    }
    void setWarranty(float warr) {
        if (warr < 0){
            cout << "You have entered an invalid input, please try again!" << endl;
            return;
        }
        Warranty = warr;
    }
    void setTechnicalSpecifications(string tech_specs) {
        TechnicalSpecifications = tech_specs;
    }
};