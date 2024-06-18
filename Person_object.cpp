#include <iostream>
#include "Person.h"
#include "Name.h"
#include <string>

using namespace std;

int main(){
    int a; 
    char g;
    string f_name;
    string l_name;

    cout << "LABORATORY EXERCISE 06 - CMSC 28" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Object Oriented Programming - Activity 2" << endl;
    cout << "Programmed by: John Andrei S. Manalo" << endl;
    cout << "========================================" << endl;
    
    Person p;
    Name n;

    cout << "Please Enter your First Name: ";
    getline(cin, f_name);
    n.setfirst_name(f_name);

    cout << "Please Enter your Last Name: ";
    getline(cin, l_name);
    n.setlast_name(l_name);

    cout << "Please Enter your Age: ";
    cin >> a;
    while (cin.fail() || a <= 0) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid input! Please enter a valid age: ";
        cin >> a;
    }
    p.set_age(a);

	cout << "Please Enter your Gender (M or F): ";
    cin >> g;
    while (g != 'M' && g != 'F' && g != 'm' && g != 'f') {
        cout << "Invalid input! Please enter 'M' for Male or 'F' for Female: ";
        cin >> g;
    }
    if (g == 'm') {
        g = 'M';
    } else if (g == 'f') {
        g = 'F';
    }

    p.setgender(g);

    cout << "----------------------------------------" << endl;
    cout << "First Name: " << n.getfirst_name() << endl;
    cout << "Last Name: " << n.getlast_name() << endl;
    cout << "Age: " << p.get_age() << endl;
    cout << "Gender: " << p.getgender() << endl;
    cout << "----------------------------------------" << endl;
    p.generation(a);

    return 0;
}
