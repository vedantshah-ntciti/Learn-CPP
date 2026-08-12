#include <string>

class GradeBook
{
private:
    std::string courseName;
    int maxGrade;
public:
    explicit GradeBook(std::string);
    void setcourseName(std::string);
    std::string getCourseName() const;
    void displaymessage() const;
    void displayGrades() ;
    void displayGradeReport() const;
    int maximum(int, int, int);
    void inputGrades(); 
            

};