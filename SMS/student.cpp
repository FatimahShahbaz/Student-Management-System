#include"student.h"
#include<iostream>
Student::Student()
{
	name = "";
	age = 18;
	studentId = "";
	gpa = 1;
	department = "";
}
Student::Student(string n, string id, int ag, float GPA, string dept):Student()
{
	setName(n);
	setAge(ag);
	setGPA(GPA);
	setId(id);
	setDept(dept);

}
void Student::setGPA(float GPA)
{
	if (GPA > 0.0 && GPA < 4.01)
		gpa = GPA;
	else
		cout << "\nInvalid GPA";
}
float Student::getGPA()
{
	return gpa;
}
void Student::setAge(int ag)
{
	if (ag > 17 && ag < 23)
		age = ag;
	else
		cout << "\nInvalid Age";
}
int Student::getAge()
{
	return age;
}
void Student::setDept(string dept)
{
	department = dept;
}
string Student::getDept()
{
	return department;
}
string Student::getName()
{
	return name;
}
string Student::getId()
{
	return studentId;
}
void Student::setName(string n)
{
	name = n;
}
void Student::setId(string id)
{
	studentId = id;
}
void Student::display()
{
	cout << "Name: " << name << '\n';
	cout << "Student id: " << studentId << '\n';
	cout << "Age: " << age << '\n';
	cout << "GPA: " << gpa << '\n';
	cout << "Department: " << department << '\n';
}
string Student::toCSV()
{
	return name + ","+studentId+"," + to_string(age) + "," + to_string(gpa) + "," + department;
}