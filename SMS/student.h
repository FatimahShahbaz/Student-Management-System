#ifndef STUDENT_H
#define STUDENT_H
#include<string>
using namespace std;
class Student
{
	string Name;
	string studentId;
	int age;
	float gpa;
	string department;
public:
	Student();
	Student(string n, string id, int ag, float GPA, string dept);
	void setGPA(float GPA);
	float getGPA();
	void setAge(int ag);
	int getAge();
	void setDept(string dept);
	string getDept();
	string getName();
	string getId();
	void setName(string n);
	void setId(string id);
	void display();
	string toCSV();
};
#endif