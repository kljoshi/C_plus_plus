#include "Question.h"
using namespace std;

Question::Question(){
    query = "";
    option1 = "";
    option2 = "";
    option3 = "";
    option4 = "";
    pointsEarned = 0;
}

void Question::setQuery(string q){
	query = q;
}

void Question::setOption1(string op1){
	option1 = op1;
}

void Question::setOption2(string op2){
	option2 = op2;
}

void Question::setOption3(string op3){
	option3 = op3;
}

void Question::setOption4(string op4){
	option4 = op4;
}

void Question::setPointsEarned(int p){
	pointsEarned = p;
}

string Question::getQuery(){
	return query;
}

string Question::getOption1(){
	return option1;
}

string Question::getOption2(){
	return option2;
}

string Question::getOption3(){
	return option3;
}

string Question::getOption4(){
	return option4;
}

int Question::getPointsEarned(){
	return pointsEarned;
}
