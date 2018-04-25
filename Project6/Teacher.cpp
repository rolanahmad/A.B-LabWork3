#include "Teacher.h"

//Construct
Teacher::Teacher(){
	name = " ";
	surname = " ";
	age = 0;
	pulpit = " ";
}
Teacher::Teacher(string name, string surname, int age, string pulpit) :name(name), surname(surname), age(age), pulpit(pulpit){}
Teacher::Teacher(const Teacher &obj) {
	this->name = obj.name;
	this->surname = obj.surname;
	this->age = obj.age;
	this->pulpit = obj.pulpit;
}

//methods
void printTeacher(Teacher *ts, int size) {
	for (int i = 0; i < size; i++) {
		cout << ts[i].name << "\t";
		cout << ts[i].surname << "\t";
		cout << ts[i].age << "\t";
		cout << ts[i].pulpit << endl;
	}
}

//operators
	//friends methods
istream& operator >> (istream& in, Teacher &s) {
	int i = 0;

	string c;

	getline(in, c, '\n');
	getline(in, s.name, '\\');
	getline(in, s.surname, '\\');

	in >> s.age;

	getline(in, s.pulpit, '\\');

	return in;
}
bool operator == (string name, Teacher obj) { return(name == obj.name); }
bool operator != (string name, Teacher obj) { return(name != obj.name); }
bool operator >(int age, Teacher obj) { return (age > obj.age); }
bool operator < (int age, Teacher obj) { return (age < obj.age); }
	//internal methods
bool Teacher::operator > (Teacher obj) { return (age > obj.age); }
bool Teacher::operator < (Teacher obj) { return (age < obj.age); }
bool Teacher::operator == (Teacher obj) { return(name == obj.name); }
bool Teacher::operator != (Teacher obj) { return(name != obj.name); }


Teacher::~Teacher(){}
