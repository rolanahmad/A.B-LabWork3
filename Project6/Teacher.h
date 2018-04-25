#pragma once
#include "Libary.h"

class Teacher {
	string name;
	string surname;
	int age;
	string pulpit;
public:
	//construct
	Teacher();
	Teacher(string name, string surname, int age, string pulpit);
	Teacher(const Teacher &obj);
	
	//methods
	friend void printTeacher(Teacher *ts, int size);

	//operators
		//friends methods
	friend istream& operator >> (istream& in, Teacher &s);
	friend bool operator == (string name, Teacher obj);
	friend bool operator != (string name, Teacher obj);
	friend bool operator > (int age, Teacher obj);
	friend bool operator < (int age, Teacher obj);
		//internal methods
	bool operator == (Teacher obj);
	bool operator != (Teacher obj);
	bool operator > (Teacher obj);
	bool operator < (Teacher obj);

	//destructor
	virtual ~Teacher();
};

