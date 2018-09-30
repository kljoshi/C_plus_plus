#include <iostream>
using namespace std;

const int COLS = 3;
const int ROWS = 3;

bool magicSquare(int array [][COLS], int row);

int main(){
	int box[COLS][ROWS]= {{4,9,2},
								 {3,5,7},
								 {8,1,6}};

	for (int row = 0; row < ROWS; row++){
		for (int col =0; col < COLS; col++){
			cout << box[row][col] << " ";
		}
		cout << endl;
	}
	
	cout << endl;
	if (magicSquare(box, ROWS)){
		cout << "The array is Lo Shu Magic Square." << endl;
	}
	else{
		cout << "The array is NOT Lo Shu Magic Squrare." << endl;
	}

	return 0;
}

bool magicSquare(int array [][COLS], int ROWS){
	
	int rowSum		  =0;
	int colSum		  =0;
	int leftDigonal  =0;
	int rightDigonal =0;

	bool allrow	  = true;
	bool allcol   = true;
	bool ldigonal = true;
	bool rdigonal = true;
	
	// count rows
	for (int row = 0 ; row < ROWS; row++){
		for (int col = 0; col < COLS ; col++){
			rowSum += array[row][col];
			// cout << array[row][col] << " ";
		}
		if(rowSum != 15){
			allrow = false;
			break;
		}
		
		rowSum = 0;
	}

	if (allrow){
		cout << "Row sum is: 15" << endl;
	}
	
	//count cols
	for (int col = 0 ; col < COLS; col++){
		for (int row = 0; row < ROWS ; row++){
			colSum += array[row][col];
			// cout << array[row][col] << endl;
		}
		if(colSum != 15){
			allcol = false;
			break;
		}
		// cout << "Sum of col " << col+1 << " :"<< colSum<< endl;
		colSum = 0;
	}

	if (allcol){
		cout << "Col sum is: 15" << endl;
	}

	// digonal left to right
	for(int row =0 ; row < ROWS; row++){
		for(int col = 0; col < COLS; col++){
			if(row == col){
				// cout << array[row][col] << endl; 
				leftDigonal += array[row][col]; 
			}
		}
	}

	if(leftDigonal != 15){
		ldigonal = false;
	}

	if(ldigonal)
	cout << "Sum of left Digonal: " << leftDigonal << endl;

	// digonal right to left
	int col = 0;
	for(int row = (ROWS-1); row >= 0; row--){
		rightDigonal += array[row][col++];
	}

	if(rightDigonal != 15){
		rdigonal = false;
	}

	if(rdigonal)
	cout << "Sum of right Digonal: "<< rightDigonal << endl; 
	
	if (allrow || allcol || ldigonal || rdigonal)
		return true;
	
	else
		return false;
}
