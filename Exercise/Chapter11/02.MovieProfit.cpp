/*
Movie Profit

Modify the Movie Data program written for Programming challenge 1 to include 
two additional members that hold the movie’s production costs and first-year 
revenues.Modify the function that displays the movie data to display the 
title, director, release year, running time, and first year’s profit or 
loss.

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
	float ProductionCost;
	float FirstYearRev;
};

void display(MovieData);
void profitLoss(MovieData movies);

int main(){

	MovieData movie1 = {"God father" ,"Kapil Joshi", 1994, 123,120000, 500000};
	MovieData movie2 ={"Kind heart", "Pritika chhetri", 1998, 198,200000, 100000};

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
	profitLoss(movies);

}

void profitLoss(MovieData movies){

	if (movies.ProductionCost > movies.FirstYearRev){
		cout << "First year loss: $" << (movies.ProductionCost - movies.FirstYearRev) <<endl;
	}
	else{
		cout << "First year profit: $" << (movies.FirstYearRev - movies.ProductionCost) <<endl;
	}

}
