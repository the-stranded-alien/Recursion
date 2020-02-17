//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

#include<bits/stdc++.h>
using namespace std;

bool isSafe(int board[][10], int i, int j, int n) {

	// Check for the column
	for (int row = 0; row < i; row++) {
		if (board[row][j] == 1) return false;
	}

	// Check for Left Diagonal
	int x = i;
	int y = j;
	while (x >= 0 && y >= 0) {
		if (board[x--][y--] == 1) return false;
	}

	// Check for Right Diagonal
	int u = i;
	int v = j;
	while (u >= 0 && v >= 0) {
		if (board[u--][v++] == 1) return false;
	}

	// The position is now safe, column and diagonals
	return true;

}

bool solveNQueen(int board[][10], int i, int n) {
	// Base Case
	if (i == n) {
		// You have succesfully placed queens in n rows (0.........(n-1))
		// Print the board
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (board[i][j] == 1) cout << "Q ";
				else cout << "_ ";
			}
			cout << endl;
		}
		cout << endl;
		return false; // Hack to Get all valid solutions.
		// return true; // Gives 1 valid solution.
	}

	// Recursive Case
	// Try to place the queen in the current row and call on the remaining part which will be solved by recursion
	for (int j = 0; j < n; j++) {
		// Check if i,j th position is safe to place the queen or not
		if (isSafe(board, i, j, n)) {
			// Place The Queen - Assuming i,j is the right postion.
			board[i][j] = 1;
			bool canPlaceNextQueen = solveNQueen(board, i + 1, n);
			if (canPlaceNextQueen) return true;
			// Means i,j is not the right postion - Assumption is wrong
			board[i][j] = 0; // Backtrack
		}
	}
	// Tried for all positions in the current row but couldn't place a queen
	return false;
}

int main() {
	int n;
	cin >> n;
	int board[10][10] = {0};
	solveNQueen(board, 0, n);
	return 0;
}