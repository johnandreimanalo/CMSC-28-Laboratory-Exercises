// CMSC 28 Assignment	UML Diagram of Class	05/11/24
// Submitted by: John Andrei S. Manalo

#include <iostream>
#include "Book.h"
#include <string>

using namespace std;

int main(){
	string new_title, new_author, new_isbn, new_publisher;
	
	Book b;
	// header
	cout << "WHAT IS YOUR FAVORITE BOOK? SHARE IT WITH US!" << endl;
    cout << "----------------------------------------------------------------------------------------------------" << endl;	
	cout << "Kindly provide the information needed below" << endl;
    cout << "----------------------------------------------------------------------------------------------------" << endl;
	
	// get the user input
	cout << "Please enter the title of the book: ";
    getline(cin, new_title);
    b.setTitle(new_title);

	cout << "Please enter the author of the book: ";
    getline(cin, new_author);
    b.setAuthor(new_author);
    
	cout << "Please enter the ISBN (International Standard Book Number): ";
	getline(cin, new_isbn);
	
	// for error-trapping
	int i = 0;
	while (i < new_isbn.length()) {
    	if (!isdigit(new_isbn[i])) {
        	cout << "You have entered an invalid ISBN! Please try again: ";
        	getline(cin, new_isbn);
        	i = 0;
        	continue;
    	}
    	i++;
	}

	b.setISBN(new_isbn);
    
    cout << "Please enter the publisher of the book: ";
    getline(cin, new_publisher);
    b.setPublisher(new_publisher);
    
    // output
    cout << "----------------------------------------------------------------------------------------------------" << endl;
    cout << "YOUR FAVORITE BOOK IS........" << endl;
    cout << "----------------------------------------------------------------------------------------------------" << endl;
    cout << "Title: " << b.getTitle() << endl;
    cout << "Author: " << b.getAuthor() << endl;
    cout << "ISBN: " << b.getISBN() << endl;
    cout << "Publisher: " << b.getPublisher() << endl;
    cout << "\nThank you very much for sharing your favorite book with us!" << endl;
    
    
	return 0;
}
