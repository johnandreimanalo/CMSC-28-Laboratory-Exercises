#include <iostream>
using namespace std;

class Person{
    private:
        int age;
        char gender;

    public:
        Person() : age(0), gender('M') {}
        Person(int new_age) : age(new_age), gender('M') {}
        Person(int new_age, char c) : age(new_age), gender(c) {}

        void set_age(int new_age){
            if (new_age >= 0){
                age = new_age; 
            } else {
                cout << "Sorry, you have entered an invalid age. Please try again!" << endl;
            }
        }
        
        int get_age(){
            return age;
        }

        void setgender(char c){
            if (c == 'M' || c == 'F'){
                gender = c;
            } else {
                cout << "Sorry, you have entered an invalid gender. Please try again!" << endl;
            }
        }
        
        char getgender(){
            return gender;
        }

        void generation(int age){
            int birthyear = 2024 - age;
            if (birthyear >= 2011){
                cout << "You belong to Generation Alpha!" << endl;
            } else if (birthyear >= 1997){
                cout << "You are a Gen Z!" << endl;
            } else if (birthyear >= 1981){
                cout << "You are a Millenial!" << endl;
            } else if (birthyear >= 1965){
                cout << "You are a Gen X!" << endl;
            } else if (birthyear >= 1946){
                cout << "You are a Boomer!" << endl;
            } else if (birthyear >= 1928){
                cout << "You belong to the Silent Generation!" << endl;
            } else {
                cout << "You belong to the Greatest Generation!" << endl;
            }
        }
};

