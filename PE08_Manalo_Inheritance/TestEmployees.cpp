#include <iostream>
#include "Employees.h"

using namespace std;

int main() {
    string fname, lname, email, position, office, empNum;
    char gender;
    int cpnum;
    float salary;

    // Description of the program
    cout << "PROGRAMMING EXERCISE 08" << endl;
    cout << "Object Oriented Programming - Inheritance" << endl;
    cout << "-------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "This program demonstrates how to create Child Classes, how to create an instance of Child classes \nand how to assign values to the child class attributes, and how to extract/ retrieve the values of these attributes." << endl;
    cout << "\nProgrammed by: John Andrei S. Manalo" << endl;
    cout << "-------------------------------------------------------------------------------------------------------------------" << endl;

    cout << "PLEASE FILL UP THIS FORM (For UP Min Employees Only)" << endl;
    cout << "-------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Enter First Name: ";
    getline(cin, fname);

    cout << "Enter Last Name: ";
    getline(cin, lname);

  	while (true){
    	cout << "Enter Gender (M/F): ";
    	if (!(cin >> gender)) {
            cout << "Invalid input! Please try again." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        } else if (gender == 'M' || gender == 'F' || gender == 'm' || gender == 'f') {
            break;
        } else {
            cout << "Invalid input! Please enter 'M' for Male or 'F' for Female." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
		}
	}
	cin.ignore(1000,'\n');
	
    cout << "Enter Email Address: ";
    getline(cin, email);

    cout << "Enter Contact Number: (09)";
    while (!(cin >> cpnum)) {
        cout << "\tYou have entered an invalid input! Please enter a valid contact number: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    cin.ignore();

    cout << "Enter Employee Number: ";
    getline(cin, empNum);

    cout << "Enter Position: ";
    getline(cin, position);

    cout << "Enter Office Unit: ";
    getline(cin, office);

    cout << "Enter Salary: ";
    while (!(cin >> salary)) {
        cout << "\tYou have entered an invalid input! Please enter a valid salary: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    cin.ignore();

    Employees employee(fname, lname, gender, email, cpnum, empNum, position, office, salary);

    cout << "========================================================================================================================================================" << endl;
    cout << "Good day, " << employee.getFirstName() << " " << employee.getLastName() << "! Thank you very much for choosing University of the Philippines Mindanao. "
         << "You are hired as " << employee.getPosition() << " in the " << employee.getOfficeUnit() << " office. With that, your employee number is "
         << employee.getEmpNum() << " and your salary is Php " << employee.getSalary() << endl;
    cout << "\nFurthermore, below is your contact information:" << endl;
    cout << "\tEmail Address: " << employee.getEmailAdd() << endl;
    cout << "\tPhone Number: 09" << employee.getCpNumber() << endl;
    cout << "========================================================================================================================================================" << endl;

    return 0;
}
