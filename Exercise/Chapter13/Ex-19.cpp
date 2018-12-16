/*
	Trivia Game

	In this programming challenge you will create a simple trivia game for two players. The
	program will work like this:

	• Starting with player 1, each player gets a turn at answering five trivia questions.
		(There are a total of 10 questions.) When a question is displayed, four possible
		answers are also displayed. Only one of the answers is correct, and if the player
		selects the correct answer he or she earns a point.
	
	• After answers have been selected for all of the questions,the program displays the
		number of points earned by each player and declares the player with the highest
		number of points the winner.

	In this program you will design a Question class to hold the data for a trivia question.
	The Question class should have member variables for the following data:
	• A trivia q uestion
	• Possible answer #1
	• Possible answer #2
	• Possible answer #3
	• Possible answer #4
	• The number of the correct answer (1, 2, 3, or 4)

	The Question class should have appropriate constructor(s), accessor, and mutator
	functions.	

	The program should create an array of 10 Question objects, one for each trivia question.
	Make up your own trivia questions on the subject or subjects of your choice for
	the objects.

*/

#ifndef QUESTION_H
#define QUESTION_H
#include <string.h>

using namespace std;
class Question {
private:
	string query;
	string option1;
	string option2;
	string option3;
	int pointsEarned;

public:
	// mutators
	void setQuery(string q);
	void setOption1(string op1);
	void setOption2(string op2);
	void setOption3(string op3);
	void setPointsEarned(int p);

	// Accessors
	string getQuery();
	string getoption();
	string getoption();
	string getoption();
	string getPointsEarned();

}


#include "Question.h"
using namespace std;

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

string Question::getoption1(){
	return option1;
}

string Question::getoption2(){
	return option2;
}

string Question::getoption3(){
	return option3;
}

string Question::getoption4(){
	return option4;
}

int Question::getPointsEarned(){
	return pointsEarned;
}



// Main.cpp


// Main.cpp

#include <iostream>
#include <string>
#include "Question.h"
#include <fstream>

using namespace std;

int main(){
	int size = 10;
	int counter = 0;
	string line;
	string ans[size];
	string choice;

	ifstream getInfo;
    ifstream getAnswer;

	getInfo.open("trivia.txt");
	getAnswer.open("answer.txt");

	Question q1[size];

	while(!getInfo && !getAnswer){
		cout << "Error opening output file" << endl;
		return -1;
	}

    int j = 0;
    while(!getAnswer.eof()){

        getline(getAnswer,ch,'\n');
        if(ch.size())
        ans[j] = ch;
        j++;
    }

    int i =0;
    while(!getInfo.eof()){

		getline(getInfo,line,'\n');
        if(counter == 0 && line.size()){
            q1[i].setQuery(line);
            counter++;
		}
		else if (counter == 1 && line.size()){
            q1[i].setOption1(line);
            counter++;
		}
        else if (counter == 2 && line.size()){
            q1[i].setOption2(line);
            counter++;
        }
        else if (counter == 3 && line.size()){
            q1[i].setOption3(line);
            counter++;
        }
        else if (counter == 4 && line.size()){
            q1[i].setOption4(line);
            counter =0;
            i++;
        }
	}

	for(int i=0 ;i < 10; i++){
		if(i>=4){
			cout << "Player 1:" << endl;
			cout << "Question " << i+1 << ": " << endl;
		}
		else {
			cout << "Player 2: " << endl;
			cout << "Question " << 6-i << ": " << endl;
		}

		cout << q1[i].getQuery(); cout << endl;
		cout << q1[i].getOption1(); cout << endl;
		cout << q1[i].getOption2(); cout << endl;
		cout << q1[i].getOption3(); cout << endl;
		cout << q1[i].getOption4(); cout << endl;
		cout << "Please select answer a,b,c, or d :";
		cin >> choice;

		do{
			cout << " You selected choice other than a,b,c, or d. Try again." << endl;
			cout << "Please select answer a,b,c, or d :";
			cin >> choice;
		}while(choice != "a" || choice != "b" || choice != "c" || choice != "d");

		if(choice == ans[i]){
			cout << "Correct answer ! " << endl;
			q1[i].setPointsEarned(1);
		}
		else{
			cout << "Incorrect answer ! " << endl;
		}
	}

//    cout << "Please select option a,b,c or d: ";
//    cin >> ans;




//	cout << q1.getQuery();
//	cout << q1.getOption1();
//	cout <<q1.getOption2();
//	cout <<q1.getOption3();
//	cout <<q1.getOption4();

	return 0;
}
