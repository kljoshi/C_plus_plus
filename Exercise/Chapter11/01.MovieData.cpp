/*
Movie Data 

Write a program that uses a structure named MovieData to store the following 
information about a movie:

Title 
Director
Year Released
Running Time (in minutes)

The program should create two MovieData variables, store values in their
members, and pass each one, in turn, to a function that displays the 
information about the movie in a clearly formatted manner. 
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct MovieData{
	string Title;
	string Director;
	int YearReleased;
	float RunningTime;
};

void display(MovieData);

int main(){

	MovieData movie1 = {"God father" ,"Kapil Joshi", 1994, 123};
	MovieData movie2 ={"Kind heart", "Pritika chhetri", 1998, 198};

	display(movie1);
	cout << endl;
	display(movie2);


	return 0;
}

void display(MovieData movies){

	cout << "Title: " << movies.Title << endl;
	cout << "Director: " << movies.Director<< endl;
	cout << "Year: " << movies.YearReleased<< endl;
	cout << "Run Time: " << movies.RunningTime<< endl;
}
