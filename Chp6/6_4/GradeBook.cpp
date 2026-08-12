#include <iostream>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string name) : maxGrade(0) {
    setcourseName(name) ;
}
void GradeBook::setcourseName(string name) {
    if (name.size() <= 25) {
        courseName = name;
    }
    else {
        courseName = name.substr(0,25);
        cerr << "Name\"" << name << "\" exceeds max length, limiting to first 25 letters\n" << endl;
    }
}

string GradeBook::getCourseName() const {
    return courseName;
}

void GradeBook::displaymessage() const {
    cout << "Welcome to the GradeBook for\n"<< getCourseName() << "\n" << endl;
}

void GradeBook::inputGrades() {
    int grade1;
    int grade2;
    int grade3;

    cout << "Enter three integer grades: ";
    cin >> grade1 >> grade2 >> grade3;

    maxGrade = maximum(grade1,grade2,grade3);
}

int GradeBook::maximum(int x, int y, int z) {
    int maxVal = x;

    if (y>maxVal) {
        maxVal = y;
    }

    if (z>maxVal) {
        maxVal = z;
    }
    return maxVal;
}

void GradeBook::displayGradeReport() const {
    cout << "max of grade entered" << maxGrade << endl;
}