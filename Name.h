#include <iostream>
#include <string>
using namespace std;

class Name {
    private:
        string first_name;
        string last_name;

    public:
        Name() : first_name(""), last_name("") {}

        string getfirst_name() {
            return first_name;
        }

        string getlast_name() {
            return last_name;
        }

        void setfirst_name(string f_name) {
            first_name = f_name;
        }

        void setlast_name(string l_name) {
            last_name = l_name;
        }
};

