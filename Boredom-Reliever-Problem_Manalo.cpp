#include <iostream>
	
// user-defined function to display program description
void progdescription() {
	std::cout << "DECIMAL TO BINARY CONVERTER\n";
	std::cout << "This program converts a decimal number into its binary equivalent.\n";
	std::cout << "------------------------------------------------------------------\n";
	std::cout << "Programmer: John Andrei Manalo\n";
	std::cout << "Date done: April 27, 2024\n";
	std::cout << "Subject code: CMSC 28\n";
	std::cout << "==================================================================\n";
}
	
// user-defined function to read decimal input from user
int read_data() {
	int num;
	std::cout << "Please enter an integer: ";
	std::cin >> num;
	return num;
}
	
// user-defined function to convert decimal to binary
void decToBinary(int x) {
	int binaryNum[32];
	int i = 0;
	
	while (x > 0) {
	    binaryNum[i] = x % 2;
	    x = x / 2;
	    i++;
	}
	
	std::cout << "Binary equivalent: ";
	for (int j = i - 1; j >= 0; j--) {
	    std::cout << binaryNum[j];
	}
	std::cout << std::endl;
}
//main function
int main() {
	// variable declaration
	int num;
	// function call to display program description
	progdescription();
	    
	// function call to read decimal input from user
	num = read_data();
	
	// function call tonvert decimal to binary
	decToBinary(num);
	
	return 0;
}

