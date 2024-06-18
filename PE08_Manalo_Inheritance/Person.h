#include <iostream>
#include <string>
using namespace std;

class Person{
	private:
		string FirstName;
		string LastName;
		char Gender;

	public:
		string emailAdd;
		int cpNumber;

		Person(){}
		Person(string fname, string lname, char gender, string email, int cpnum){
			FirstName = fname;
			LastName = lname;
			Gender = gender;
			emailAdd = email;
			cpNumber = cpnum;
		}

		string getFirstName() {
			return FirstName;
		}

		string getLastName() {
			return LastName;
		}

		char getGender(){
			return Gender;
		}
		
		int getCpNumber() {
			return cpNumber;
		}
		
		string getEmailAdd() {
			return emailAdd;
		}
		
		void setFirstName(string fname) {
			FirstName = fname;
		}

		void setLastName(string lname) {
			LastName = lname;
		}

		void setGender(char gender){
			if (gender == 'M' || gender == 'F'){
				Gender = gender;
			} else {
				cout << "Sorry, you have entered an invalid gender. Please try again!" << endl;
			}
		}

		void setCpNumber(int cpnum) {
			cpNumber = cpnum;
		}
		
		void setEmailAdd(string email) {
			emailAdd = email;
		}

};
