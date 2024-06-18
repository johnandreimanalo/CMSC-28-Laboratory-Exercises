#include <iostream>
#include "Student.h"

using namespace std;

int main() {
    string fname, lname, email, sNum, course, dept, college;
    char gender;
    int cpnum;
    
    // description of the program
    cout << "PROGRAMMING EXERCISE 08" << endl;
    cout << "Object Oriented Programming - Inheritance" << endl;
    cout << "-------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "This program demonstrates how to create Child Classes, how to create an instance of Child classes \nand how to assign values to the child class attributes, and how to extract/ retrieve the values of these attributes." << endl;
    cout << "\nProgrammed by: John Andrei S. Manalo" << endl;
    cout << "-------------------------------------------------------------------------------------------------------------------" << endl;

	cout << "PLEASE FILL UP THIS FORM (For UP Min Students Only)" << endl;
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
	cin.ignore(1000, '\n');
	
    cout << "Enter Email Address: ";
    getline(cin, email);
    
	cout << "Enter Contact Number: (09)";
	while (!(cin >> cpnum)) {
    	cout << "\tYou have entered an invalid input! Please enter a valid contact number: ";
    	cin.clear();
    	cin.ignore(1000, '\n');
	}
	cin.ignore();
	
	cout << "Enter Student Number: ";
	getline(cin, sNum);

    cout << "Enter Course: ";
    getline(cin, course);
 
    cout << "Enter Department: ";
    getline(cin, dept);

    cout << "Enter College: ";
    getline(cin, college);

    Student student(fname, lname, gender, email, cpnum, sNum, course, dept, college);
	
	cout << "========================================================================================================================================================" << endl;
    cout << "Good day, " << student.getFirstName() << " " << student.getLastName() << "!" << "\n\tWelcome to University of the Philippines Mindanao and Congratulations! "
         << "We are pleased to inform you that you are admitted in the " << student.getCourse() << " program under the Department of "
         << student.getDepartment() << ", College of " << student.getCollege() << ". Your Student number is " << student.getStudentNum() << "." << endl;
	cout << "========================================================================================================================================================" << endl;
	cout << "Furthermore, below is your contact information:" << endl;
    cout << "\tEmail Address: " << student.getEmailAdd() << endl;
    cout << "\tPhone Number: 09" << student.getCpNumber() << endl;
    cout << "========================================================================================================================================================" << endl;
		
		
		
    return 0;
}

