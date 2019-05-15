#include<iostream>
#include<stdlib.h>
using namespace std;
char matrix[3][3]{ '1','2','3','4','5','6','7','8','9' };
char player = 'X';
int p;
void Draw() {
	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 2; j++) {
			cout << " "<< matrix[i][j] << " ";
		}
		cout << endl;
	}
}
void TogglePlayer() {
	if (player == 'X') {
		player = 'O';
	}
	else
		player = 'X';
}
void Input() {
	int a;
	cout << "-------Choose direction: ";
	cin >> a;
	a--;
	if (matrix[a / 3][a % 3] != 'X' && matrix[a / 3][a % 3] != 'O') {
		matrix[a / 3][a % 3] = player;
	}
	else {
		cout << "\n -------ILLEGAL MOVE!! \n";
		exit(0);
	}
}



char Win() { 
	
/*	if ((matrix[0][0] == matrix[0][1]) && (matrix[0][1] == matrix[0][2])) {
		return player;
	}			
	else if ((matrix[1][0] == matrix[1][1]) && (matrix[1][1] == matrix[1][2])) {
		return player;
	}
	else if ((matrix[2][0] == matrix[2][1]) && (matrix[2][1] == matrix[2][2])) {
		return player;
	}
	else if ((matrix[0][0] == matrix[1][1]) && (matrix[1][1] == matrix[2][2])) {
		return player;
	}
	else if ((matrix[2][0] == matrix[1][1]) && (matrix[1][1] == matrix[0][2])) {
		return player;
	}
	else if ((matrix[0][0] == matrix[1][0]) && (matrix[1][0] == matrix[2][0])) {
		return player;
	}
	else if ((matrix[0][1] == matrix[1][1]) && (matrix[1][1] == matrix[2][1])) {
		return player;
	}
	else if ((matrix[0][2] == matrix[1][2]) && (matrix[1][2] == matrix[2][2])) {
		return player;
	}  
	*/
	
	if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X') {
		return 'X';
	}
	if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X') {
		return 'X';
	}
	if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X') {
		return 'X';
	}
	if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X') {
		return 'X';
	}
	if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X') {
		return 'X';
	}
	if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X') {
		return 'X';
	}
	if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X') {
		return 'X';
	}
	if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X') {
		return 'X';

	}
	if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O') {
		return 'O';
	}
	if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O') {
		return 'O';
	}
	if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O') {
		return 'O';
	}
	if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O') {
		return 'O';
	}
	if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O') {
		return 'O';
	}
	if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O') {
		return 'O';
	}
	if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O') {
		return 'O';
	}
	if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O') {
		return 'O';

	}

	return 'D';

}

void berabere() {

}

int main() {
	int p = 0;
	Draw();
	while (1) {
		p++;
		cout << endl << player << " ' turn\n";				
		Input();
		Draw();
		if (Win() == 'X' || Win() == 'O') {
			break;
		}
		else if (Win() == 'D' && p == 9) {
			cout << "\n-------DRAW------- " << endl;
			goto a;
		}
		TogglePlayer();
		
	}
	cout << "PLAYER: " << "'" << Win() << "'" << " HAS WON THE GAME!!!" << endl;
a:
	system("pause");
	return 0;
}









