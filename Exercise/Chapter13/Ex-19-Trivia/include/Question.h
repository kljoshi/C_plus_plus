#ifndef QUESTION_H
#define QUESTION_H
#include <string>

using namespace std;
class Question {
private:
	string query;
	string option1;
	string option2;
	string option3;
	string option4;
	int pointsEarned;

public:

    // Constructor
    Question();

	// mutators
	void setQuery(string q);
	void setOption1(string op1);
	void setOption2(string op2);
	void setOption3(string op3);
	void setOption4(string op4);
	void setPointsEarned(int p);

	// Accessors
	string getQuery();
	string getOption1();
	string getOption2();
	string getOption3();
	string getOption4();
	int getPointsEarned();

};
#endif // QUESTION_H
