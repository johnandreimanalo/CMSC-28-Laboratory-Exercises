#include <iostream>
using namespace std;

class Person{
	private:
		string FirstName;
		string LastName;
		char Gender;
		
	public:
		Person(){}
		Person(string f_name, string l_name, char gender){
			FirstName = f_name;
			LastName = l_name;
			Gender = gender;
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
        void setFirstName(string f_name) {
            FirstName = f_name;
        }

        void setLastName(string l_name) {
            LastName = l_name;
        }
        void setGender(char gender){
            if (gender == 'M' || gender == 'F'){
                Gender = gender;
            } else {
                cout << "Sorry, you have entered an invalid gender. Please try again!" << endl;
            }
        }
};
