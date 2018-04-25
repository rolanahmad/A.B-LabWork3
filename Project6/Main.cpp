#include "Libary.h"
#include "Student.h"
#include "Teacher.h"

void main() {
	system("chcp 1251");
	system("cls");

	fstream in_file("Students.txt");

	int num;
	
	in_file >> num;

	Student * s = new Student[num];
	
	
	for (int i = 0; i < num; i++) {
		in_file >> s[i];
	}
	
	printStudents(s, num);

	cout << (s[0] > s[1]) << endl;
	cout << (s[0] < s[1]) << endl;
	cout << (s[0] == s[1]) << endl;
	cout << (s[0] != s[1]) << endl;

	in_file.close();

	in_file.open("Teacher.txt");

	Teacher * t = new Teacher[num];
	in_file >> num;

	for (int i = 0; i < num; i++) {
		in_file >> t[i];
	}
	printTeacher(t, num);

	cout << (t[0] > t[1]) << endl;
	cout << (t[0] < t[1]) << endl;
	cout << (t[0] == t[1]) << endl;
	cout << (t[0] != t[1]) << endl;

	system("pause");

}
