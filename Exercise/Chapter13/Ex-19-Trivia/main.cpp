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

    bool condition;

	getInfo.open("trivia.txt");
	getAnswer.open("answer.txt");

	Question q1[size];

	while(!getInfo && !getAnswer){
		cout << "Error opening output file" << endl;
		return -1;
	}

    int j = 0;
    while(!getAnswer.eof()){

        getline(getAnswer,choice,'\n');
        if(choice.size())
        ans[j] = choice;
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

    int index = 1;
	for(int i=0 ;i < 10; i++){
		if(i<=4){
			cout << "\nPlayer 1:" << endl;
			cout << "Question " << i+1 << ": " << endl;
		}
		else {
			cout << "\nPlayer 2: " << endl;
			cout << "Question " << index++ << ": " << endl;
		}

		cout << q1[i].getQuery(); cout << endl;
		cout << q1[i].getOption1(); cout << endl;
		cout << q1[i].getOption2(); cout << endl;
		cout << q1[i].getOption3(); cout << endl;
		cout << q1[i].getOption4(); cout << endl;
		cout << "Please select answer a,b,c, or d : ";
		cin >> choice;

        if(choice == "a" || choice == "b" || choice == "c" || choice == "d"){
            condition = false;
        }
        else{
            condition = true;
        }

		while(condition){
			cout << " You selected choice other than a,b,c, or d. Try again." << endl;
			cout << "Please select answer a,b,c, or d :";
			cin >> choice;

			if(choice == "a" || choice == "b" || choice == "c" || choice == "d"){
                condition = false;
            }
            else{
                condition = true;
            }
        }

		if(choice == ans[i]){
			cout << "Correct answer ! " << endl;
			q1[i].setPointsEarned(1);
		}
		else{
			cout << "Incorrect answer ! " << endl;
		}
	}

	int totalP1 = 0;
	for(int i=0 ; i<5; i++){
        totalP1 += q1[i].getPointsEarned();
	}
	cout << "Player 1 earned :" << totalP1 << endl;

    int totalP2 = 0;
    for(int i=5 ; i<10; i++){
         totalP2 += q1[i].getPointsEarned();
	}
    cout << "Player 2 earned :" << totalP2 << endl;

    if(totalP1 == totalP2){
        cout << "It's a Draw !"<< endl;
    }
    else if (totalP1 > totalP2){
        cout << "Player 1 wins !" << endl;
    }
    else{
        cout << "Player 2 wins !" << endl;
    }

	return 0;
}
