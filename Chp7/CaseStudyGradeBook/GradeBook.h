#include <string>
#include <array>

class GradeBook
{
	
public:
	static const size_t students =10;

	GradeBook(const std::string &, const std::array<int, students> &);

	void setcourseName(const std::string &);
	std::string getCourseName() const;
	void displaymessage() const;
	void processGrades() const;
	int getMaximum() const;
	int getMinimum() const;
	double getAverage() const;
	void outputGrades() const; 

private:
	std::string courseName;
	std::array <int, students> grades;
};
