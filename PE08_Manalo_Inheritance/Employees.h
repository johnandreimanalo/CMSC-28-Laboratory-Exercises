#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

class Employees : public Person {
	private:
		string empNum;

	public:
		string Position;
		string OfficeUnit;
		float Salary;

		Employees() {}
		Employees(string fname, string lname, char gender, string email, int cpnum, string eNum, string position, string office, float salary)
			: Person(fname, lname, gender, email, cpnum), empNum(eNum), Position(position), OfficeUnit(office), Salary(salary) {}

		string getEmpNum() {
			return empNum;
		}

		void setEmpNum(string eNum) {
			empNum = eNum;
		}

		string getPosition() {
			return Position;
		}

		void setPosition(string position) {
			Position = position;
		}

		string getOfficeUnit() {
			return OfficeUnit;
		}

		void setOfficeUnit(string office) {
			OfficeUnit = office;
		}

		float getSalary() {
			return Salary;
		}

		void setSalary(float salary) {
			Salary = salary;
		}
};
