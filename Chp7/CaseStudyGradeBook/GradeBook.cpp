#include <iostream>
#include <iomanip>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(const string &name, const array<int , students> &gradesArray) : courseName(name), grades(gradesArray) {
}

void GradeBook::setcourseName(const string &name) {
    courseName = name;
}

string GradeBook::getCourseName() const {
    return courseName;
}

void GradeBook::displaymessage() const {
    cout << "Welcome to the GradeBook for\n"<< getCourseName() << "\n" << endl;
}

void GradeBook::processGrades() const
{
    outputGrades();

    cout << setprecision(2) << fixed;
    cout<< "\nClass average is " << getAverage() << endl;

    cout << "Lowest Grade is " << getMinimum() << "\nHighest Grade is " << getMaximum() << endl;
}

int GradeBook::getMinimum() const
{
    int lowGrade = 100;

    for (int grade : grades) 
    {
        if (grade<lowGrade) 
        {
            lowGrade=grade;
        }
    }
    return lowGrade;
}

int GradeBook::getMaximum() const
{
    int highGrade = 0;

    for (int grade : grades) 
    {
        if (grade>highGrade) 
        {
        highGrade =grade;
        }
    }
    return highGrade;
}

double GradeBook::getAverage() const
{
    int total = 0;

    for (int grade : grades) 
    {
        total += grade;
    }

    return static_cast <double> (total)/grades.size();
}

void GradeBook::outputGrades() const 
{
    cout << "\nThe Grades are:\n\n";

    for (size_t i=  0 ; i < grades.size() ; i++)
    {
        cout << "Student " << setw(2) << i+1 << setw(3) << grades[i] << endl;
    }
}