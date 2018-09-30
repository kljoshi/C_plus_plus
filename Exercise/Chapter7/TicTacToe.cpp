#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

void displayBox(char box[][COLS],int ROWS);
bool readPosition(char box[][COLS], int ROWS, int rowPosition, int colPosition);
bool CheckWhoWin(char array [][COLS], int ROWS, char option);
bool checkIfAllPositionFilled(char box[][COLS], int ROWS);


int main(){
	int rowPosition;
	int colPosition;
	bool playerOneCondition = true;
	bool playerTWOCondition = true;
	string player1;
	string player2;
	char box[ROWS][COLS] = {{'*','*','*'},
									{'*','*','*'},
									{'*','*','*'}};
									
	displayBox (box, ROWS);
	
	do {
		do{
			cout << "Player one select position: ";
			cin >> rowPosition >> colPosition;

			if (readPosition(box, ROWS,rowPosition,colPosition)){
				box[rowPosition][colPosition] = 'X';
				playerOneCondition = false;
			}
			else{
				cout << "Invalid position or Position already taken. Try again!" << endl; 
				playerOneCondition = true;
			}

			displayBox (box,ROWS);
		}while(playerOneCondition);
		
		if (CheckWhoWin(box, ROWS, 'X')){
			cout << "Player one wins. " << endl;
			break;
		}
		else if (!checkIfAllPositionFilled(box, ROWS)){
			cout << "Its a draw !" << endl;
			exit(0);
		}

		do{
			cout << "Player two select position: ";
			cin >> rowPosition >> colPosition;

			if (readPosition(box, ROWS,rowPosition,colPosition)){
				box[rowPosition][colPosition] = 'O';
				playerTWOCondition = false;
			}
			else{
				cout << "Invalid position or Position already taken. Try again!" << endl; 
				playerTWOCondition = true;
			}

			displayBox(box,ROWS);
		}while(playerTWOCondition);
		
		if (CheckWhoWin(box, ROWS, 'O')){
			cout << "Player two wins. " << endl;
			break;
		}
		else if (!checkIfAllPositionFilled(box, ROWS)){
			cout << "Its a draw !" << endl;
			exit(0);
		}
		
	 } while(true);
	 
	return 0;
}

void displayBox(char box[][COLS],int ROWS){
	
	for (int row = 0; row < ROWS; row++){
		for (int col =0; col < COLS; col++){
			cout << box[row][col] << " ";
		}
		cout << endl;
	}
	
}

bool readPosition(char box[][COLS], int ROWS, int rowPosition, int colPosition){
	if (box[rowPosition][colPosition] != '*' ){
		return false;
	}
	else{
		return true;
	}
}

bool checkIfAllPositionFilled(char box[][COLS], int ROWS){
	int counter = 0;
	for (int row = 0; row < ROWS; row++){
		for (int col =0; col < COLS; col++){
			if (box[row][col] == '*'){
					return true;
			}
		}
	}
	return false;
}

bool CheckWhoWin(char array [][COLS], int ROWS, char option){

	bool allrow	  = false;
	bool allcol   = false;
	bool ldigonal = false;
	bool rdigonal = false;
	
	// row match
	int rowCounter = 0;
	bool breakRowLoop = false;
	for (int row = 0 ; row < ROWS; row++){
		for (int col = 0; col < COLS ; col++){
			if (array[row][col] == option){
				 rowCounter++;
				 if (rowCounter == 3){
				 	allrow = true;
				 	breakRowLoop = true;
				 	break;
				 }
			}
			else{
				rowCounter = 0;
				allrow = false;
				break;
			}
		}
		if(breakRowLoop){
			break;
		}
	}

	// column match
	int colCounter = 0;
	bool breakColLoop = false;
	for (int col = 0 ; col < COLS; col++){
		for (int row = 0; row < ROWS ; row++){
			if (array[row][col] == option){
				colCounter++;
				if (colCounter == 3){
					allcol = true;
				 	breakColLoop = true;
					break;
				}
			}
			else{
				colCounter = 0;
				allcol = false;
				break;
			}
		}
		if(breakColLoop){
			break;
		}
	}

	// digonal left to right match
	int leftDigonalCounter = 0;
	bool breakleftDigonal = false;
	for(int row =0 ; row < ROWS; row++){
		for(int col = 0; col < COLS; col++){
			if(row == col){
				if (array[row][col] == option){
					leftDigonalCounter++;
					if(leftDigonalCounter == 3){
						ldigonal = true;
						breakleftDigonal = true;
						break;
					}
				}
			}
		}
		if(breakleftDigonal){
			break;
		}
	}

	// digonal right to left match
	int col = 0;
	int rightDigonalCounter = 0;
	for(int row = (ROWS-1); row >= 0; row--){
		if(array[row][col++] == option){
				rightDigonalCounter++;
			if(rightDigonalCounter == 3){
				rdigonal = true;
				break;
			}
		}
	}
	
	if (allrow || allcol || ldigonal || rdigonal)
		return true;
	
	else
		return false;
}
