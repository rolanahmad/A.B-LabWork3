#include "Student.h"

//construct
Student::Student(){
	name = "";
	surname = "";
	age = 0;
	gender = "";
	group = 0;
}


Student::Student(string name, string surname, int age, string gender, int group) {
	this->name = name;
	this->surname = surname;
	this->age = age;
	this->gender = gender;
	this->group = group;
}

Student::Student(const Student &obj) {
	this->name = obj.name;
	this->surname = obj.surname;
	this->age = obj.age;
	this->gender = obj.gender;
	this->group = obj.group;
}

//methods

void printStudents(Student *ss, int size) {
	string male;
	for (int i = 0; i < size; i++) {
		cout << ss[i].name << "\t";
		cout << ss[i].surname << "\t";
		cout << ss[i].age << "\t";
		cout << ss[i].gender << "\t";
		cout << ss[i].group << endl;
		
	}
}
//operators

// >>
istream& operator >> (istream& in, Student &s) {
	int i = 0;
	
	string c;

	getline(in, c, '\n');
	getline(in, s.name, '\\');
	getline(in, s.surname, '\\');

	in >> s.age >> s.gender >> s.group;

	return in;
}

// ==
bool operator == (string gender, Student obj) { return(gender == obj.gender); }

// !=
bool operator != (string gender, Student obj) { return(gender != obj.gender); }
// >
bool operator >(int age, Student obj) { return (age > obj.age); }

// <
bool operator < (int age, Student obj) { return (age < obj.age); }

bool Student::operator > (Student obj) { return (age > obj.age); }
bool Student::operator < (Student obj) { return (age < obj.age); }

bool Student::operator == (Student obj) { return(name == obj.name); }
bool Student::operator != (Student obj) { return(name != obj.name); }
