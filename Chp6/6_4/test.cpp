#include <iostream>
#include "GradeBook.h"
using namespace std;

int main() {
   GradeBook mygradebook("CSL100 INtro to Programming");

   mygradebook.displaymessage();
   mygradebook.inputGrades();
   mygradebook.displayGradeReport();
}