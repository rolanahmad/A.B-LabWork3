#pragma once

#include "Libary.h"


class Student {
	string name;
	string surname;
	int age;
	string gender;
	int group;

public:
	//construct
	Student();
	Student(string name, string surname, int age, string gender, int group);
	Student(const Student &obj);

	//methods
	friend void printStudents(Student *ss, int size);
	
	//operators
		//friends methods
	friend istream& operator >> (istream& in, Student &s);
	friend bool operator == (string gender, Student obj);
	friend bool operator != (string gender, Student obj);
	friend bool operator > (int age, Student obj);
	friend bool operator < (int age, Student obj);
		//internal methods
	bool operator == (Student obj);
	bool operator != (Student obj);
	bool operator > (Student obj);
	bool operator < (Student obj);

	//destructor
	virtual ~Student(){}
};

