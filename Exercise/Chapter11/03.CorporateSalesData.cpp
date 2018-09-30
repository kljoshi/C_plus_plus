/*
Write a program that uses a structure to store the following data on a 
company divison:

	Division Name (such as East, West, North, or South)
	First--quarter sales
	Second-quarter sales
	Third-quarter sales
	Fourth-quarter sales
	Total annual sales
	Average quarterly sales

	The program should use four variables of this structure. each variable
	should represen one of the following corporate divisions. East, West, North
	and South/ The user should be asked for the four quarters' sales figure for
	each division. Each division's total and average sales should be calculated
	and stored in the appropriate member of each structer variable. These figures
	should then be displayed on the screen.

	Input Validation: dont accept negative numbers for any sales figures.
*/

#include <iostream>
#include <string>

using namespace std;

struct CompanyDivision{
	string DivisionNAme;
	float FirstQuarter;
	float SecondQuarter;
	float ThirdQuarter;
	float FourthQuarter;
	float TotalAnnual;
	float AverageQuarter;
};

struct calculate{
	float total;
	float average;
};

void display(CompanyDivision div);
calculate total(CompanyDivision div);



int main(){

	CompanyDivision east = {"east",100,200,300,400};
	CompanyDivision west = {"west",500,600,700,800};
	CompanyDivision north = {"north",900,1000,1100,1200};
	CompanyDivision south ={"south", 1300,1400,1500,1600};

	display(east);
	cout << endl;
	display(west);
	cout << endl;
	display(north);
	cout << endl;
	display(south);
	
	
	return 0;
}

void display(CompanyDivision div){
	calculate value;
	cout <<"Division Name: " << div.DivisionNAme << endl;
	cout <<"First Quarter: "<< div.FirstQuarter<<endl;
	cout <<"Second Quarter: "<< div.SecondQuarter<<endl;
	cout <<"Third Quarter: "<< div.ThirdQuarter<<endl;
	cout <<"Fourth-quarter: "<< div.FourthQuarter<<endl;
	value = total(div);
	cout <<"Total: "<< value.total << endl;
	cout <<"Average: "<< value.average << endl;
	
}

calculate total(CompanyDivision div){
	calculate value;
	value.total = (div.FirstQuarter+div.SecondQuarter+div.ThirdQuarter+div.FourthQuarter+0.0);
	value.average = value.total / 4;
	
	return value;
}

