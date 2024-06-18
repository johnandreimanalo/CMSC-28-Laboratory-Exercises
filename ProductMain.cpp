/* Programming Exercise 07 - Inheritance and Encapsulation
        Programmed by: John Andrei Manalo
        Date: May 24, 2024
    - this is an object-oriented program written in C++ that implements an inventory management system for a clothing and electronics shop.
    It allows the user to input attributes of clothing and electronics items. The program uses classes for Clothing and Electronics,
    which are derived from a base class Product. User inputs are validated, and the details of each item are displayed at the end. */

#include <iostream>
#include "ProductInventory.h"

using namespace std;

int main() {
    // Create Clothing instance with user input
    Clothing clothing; // Create an instance of the Clothing class

    // Declare variables to store user input
    string name, brand, description, category, size, color, material;
    float price;
    int quantity;
    
    // Prompt user for clothing details
    cout << "=====================================================" << endl;
    cout << "JAM'S CLOTHING AND ELECTRONIC SHOP INVENTORY SYSTEM" << endl;
    cout << "=====================================================" << endl;
    cout << "Enter details for Clothing item:\n";
    cout << "=====================================================" << endl;
    cout << "\tName: ";
    getline(cin, name); // Get name input from user
    clothing.setName(name); // Set name for clothing instance

    // Prompt user for brand and set it for clothing instance
    cout << "\tBrand: ";
    getline(cin, brand);
    clothing.setBrand(brand);

    // Prompt user for price and validate input
    cout << "\tPrice: Php ";
    while (!(cin >> price) || price < 0) {
        cout << "\tYou have entered an invalid input! Please try again: Php ";
        cin.clear(); // clear error flags
        cin.ignore(5000, '\n'); // discard invalid input
    }
    clothing.setPrice(price); // Set price for clothing instance

    // Prompt user for quantity and validate input
    cout << "\tQuantity: ";
    while (!(cin >> quantity) || quantity <= 0) {
        cout << "\tYou have entered an invalid input! Please try again: ";
        cin.clear(); // clear error flags
        cin.ignore(5000, '\n'); // discard invalid input
    }
    clothing.setQuantity(quantity); // Set quantity for clothing instance
    cin.ignore(); // to clear the newline character left in the buffer

    // Prompt user for description and set it for clothing instance
    cout << "\tDescription: ";
    getline(cin, description);
    clothing.setDescription(description);

    // Prompt user for category and validate input
    cout << "\tCategory: ";
    getline(cin, category);
    while (category != "Clothing" && category != "clothing") {
        cout << "\tYou have entered an invalid category! Please try again: ";
        getline(cin, category);
    }
    clothing.setCategory(category); // Set category for clothing instance

    // Prompt user for size and set it for clothing instance
    cout << "\tSize: ";
    getline(cin, size);
    clothing.setSize(size);

    // Prompt user for color and set it for clothing instance
    cout << "\tColor: ";
    getline(cin, color);
    clothing.setColor(color);

    // Prompt user for material and set it for clothing instance
    cout << "\tMaterial: ";
    getline(cin, material);
    clothing.setMaterial(material);

    // Create Electronics instance with user input
    Electronics electronics; // Create an instance of the Electronics class

    // Declare variables to store user input for electronics
    string model, technicalSpecifications;
    float warranty;

    // Prompt user for electronics details
    cout << "=====================================================" << endl;
    cout << "Enter details for Electronics item:\n";
    cout << "=====================================================" << endl;
    cout << "\tName: ";
    getline(cin, name); // Get name input from user for electronics
    electronics.setName(name); // Set name for electronics instance

    // Prompt user for brand and set it for electronics instance
    cout << "\tBrand: ";
    getline(cin, brand);
    electronics.setBrand(brand);

    // Prompt user for price and validate input
    cout << "\tPrice: Php ";
    while (!(cin >> price) || price < 0) {
        cout << "\tYou have entered an invalid input! Please try again: Php ";
        cin.clear(); // clear error flags
        cin.ignore(5000, '\n'); // discard invalid input
    }
    electronics.setPrice(price); // Set price for electronics instance

    // Prompt user for quantity and validate input
    cout << "\tQuantity: ";
    while (!(cin >> quantity) || quantity <= 0) {
        cout << "\tYou have entered an invalid input! Please try again: ";
        cin.clear(); // clear error flags
        cin.ignore(5000, '\n'); // discard invalid input
    }
    electronics.setQuantity(quantity); // Set quantity for electronics instance
    cin.ignore(); // to clear the newline character left in the buffer

    // Prompt user for description and set it for electronics instance
    cout << "\tDescription: ";
    getline(cin, description);
    electronics.setDescription(description);

    // Prompt user for category and validate input
    cout << "\tCategory: ";
    getline(cin, category);
    while (category != "Electronics" && category != "electronics") {
        cout << "\tYou have entered an invalid category! Please try again: ";
        getline(cin, category);
    }
    electronics.setCategory(category); // Set category for electronics instance

    // Prompt user for model and set it for electronics instance
    cout << "\tModel: ";
    getline(cin, model);
    electronics.setModel(model);

    // Prompt user for warranty and validate input
    cout << "\tWarranty (in years): ";
    while (!(cin >> warranty) || warranty < 0) {
        cout << "\tYou have entered an invalid input! Please try again: ";
        cin.clear(); // clear error flags
        cin.ignore(5000, '\n'); // discard invalid input
    }
    electronics.setWarranty(warranty); // Set warranty for electronics instance
    cin.ignore(); // to clear the newline character left in the buffer

    // Prompt user for technical specifications and set it for electronics instance
    cout << "\tTechnical Specifications: ";
    getline(cin, technicalSpecifications);
    electronics.setTechnicalSpecifications(technicalSpecifications);

    // Print details of Clothing item
    cout << "=====================================================" << endl;
    cout << "Clothing Item Details:\n";
    cout << "=====================================================" << endl;
    cout << "Name: " << clothing.getName() << "\n";
    cout << "Brand: " << clothing.getBrand() << "\n";
    cout << "Price: Php " << clothing.getPrice() << "\n";
    cout << "Quantity: " << clothing.getQuantity() << "\n";
    cout << "Description: " << clothing.getDescription() << "\n";
    cout << "Category: " << clothing.getCategory() << "\n";
    cout << "Size: " << clothing.getSize() << "\n";
    cout << "Color: " << clothing.getColor() << "\n";
    cout << "Material: " << clothing.getMaterial() << "\n";

    // Print details of Electronics item
    cout << "=====================================================" << endl;
    cout << "Electronics Item Details:\n";
    cout << "=====================================================" << endl;
    cout << "Name: " << electronics.getName() << "\n";
    cout << "Brand: " << electronics.getBrand() << "\n";
    cout << "Price: Php " << electronics.getPrice() << "\n";
    cout << "Quantity: " << electronics.getQuantity() << "\n";
    cout << "Description: " << electronics.getDescription() << "\n";
    cout << "Category: " << electronics.getCategory() << "\n";
    cout << "Model: " << electronics.getModel() << "\n";
    cout << "Warranty: " << electronics.getWarranty() << " years\n";

    return 0;
}
