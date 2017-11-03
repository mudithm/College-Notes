#include <iostream>

using namespace std;
void printMatrix(int matrix[][4], int, int);
int rotateMatrix(int matrix[][4], int xDim, int yDim){
	if (xDim != yDim)
		return -1;
	int out[xDim][4];
	for (int i = 0; i < xDim; i++){
		for (int j = 0; j < yDim; j++){
			out[j][3-i] = matrix[i][j];
			cout << out[i][j] << " ";
		}
		cout << endl;


	}
	for (int y = 0; y < yDim; y++)
		for (int x = 0; x < xDim; x++)
			matrix[y][x] = out[y][x];

	printMatrix(out, 4, 4);
	return 0;
	
}

void printMatrix(int matrix[][4], int xDim, int yDim){

	for (int i = 0; i < xDim; i++){
		for (int j = 0; j < yDim; j++)
			cout << matrix[i][j] << " ";
		cout << endl;
	}
}
int main(){
	int mat[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};	
	rotateMatrix(mat, 4, 4);
	printMatrix(mat, 4, 4);

}
