#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

class Student : public Person {
	private:
		string studentNum;

	public:
		string Course;
		string Department;
		string College;

		Student() {}
		Student(string fname, string lname, char gender, string email, int cpnum, string sNum, string course, string dept, string college)
			: Person(fname, lname, gender, email, cpnum), studentNum(sNum), Course(course), Department(dept), College(college) {}

		string getStudentNum() {
			return studentNum;
		}

		void setStudentNum(string sNum){
			studentNum = sNum;
		}

		string getCourse() {
			return Course;
		}

		void setCourse(string course) {
			Course = course;
		}

		string getDepartment() {
			return Department;
		}

		void setDepartment(string dept) {
			Department = dept;
		}

		string getCollege() {
			return College;
		}

		void setCollege(string college) {
			College = college;
		}
};
