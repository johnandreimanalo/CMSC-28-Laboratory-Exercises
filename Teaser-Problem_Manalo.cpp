#include <iostream>

// user-defined function to display program description
void progdescription() {
    std::cout << "This program finds the highest and lowest numbers among three inputs, and outputs their difference.\n";
    std::cout << "---------------------------------------------------------------------------------------------------\n";
    std::cout << "Programmer: John Andrei Manalo\n";
    std::cout << "Date done: April 27, 2024\n";
    std::cout << "Subject code: CMSC 28\n";
    std::cout << "===================================================================================================\n";
}

// user-defined function to read data from user
void readdata(int& x, int& y, int& z) {
    std::cout << "Please enter the 1st number: ";
    std::cin >> x;
    
    std::cout << "Please enter the 2nd number: ";
    std::cin >> y;

    std::cout << "Please enter the 3rd number: ";
    std::cin >> z;
}
// user-defined function to get the highest value
double getlarge(int x, int y, int z) {
    if (x >= y && x >= z) {
        return x;
    } else if (y >= x && y >= z) {
        return y;
    } else {
        return z;
    }
}

// user-defined function to get the smallest value
double getsmall(int x, int y, int z) {
    if (x <= y && x <= z) {
        return x;
    } else if (y <= x && y <= z) {
        return y;
    } else {
        return z;
    }
}

// user-defined function to display the output
void showdata(int diff) {
    std::cout << "The difference between the largest and smallest numbers is: " << diff << std::endl;
}

// main function
int main() {
	// variable declaration
    int x, y, z;
    int smallval, largeval, diff;
    // function call to isplay program description
    progdescription();
    
    // function call to read data from user
    readdata(x, y, z);
    
    // assignment statements to calculate and store the highest and smallest values
    largeval = getlarge(x, y, z);
    smallval = getsmall(x, y, z);
    
    // assignment statement to calculate and store the value of difference
    diff = largeval - smallval;
    
    // function call to output the result	
	showdata(diff);
    
    return 0;
}

