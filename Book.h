#include <iostream>
using namespace std;

class Book{
	private:
		string Title;
		string Author;
		string ISBN;
		string Publisher;
	
	public:
		Book(){}
		Book(string title, string author, string isbn){
			
			Title = title;
			Author = author;
			ISBN = isbn;
		}

		string getTitle(){
			return Title;
		}
		string getAuthor(){
			return Author;
		}
		string getISBN(){
			return ISBN;
		}
		string getPublisher(){
			return Publisher;
		}
		void setTitle(string bktitle){
			Title = bktitle;
		}
		void setAuthor(string bkauthor){
			Author = bkauthor;
		}
		void setISBN(string bkisbn){
			ISBN = bkisbn;
		}
		void setPublisher(string bkpublisher){
			Publisher = bkpublisher;
		}
};

