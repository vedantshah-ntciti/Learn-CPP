#include <array>
#include "GradeBook.h"
using namespace std;

int main() {
   const array<int, GradeBook::students> grades = {87,68,94,100,83,78,85,91,76,87};
   string courseName = "CSL100";

   GradeBook myGradeBook(courseName, grades);
   myGradeBook.displaymessage();
   myGradeBook.processGrades();

}