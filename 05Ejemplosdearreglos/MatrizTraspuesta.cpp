#include <iostream>

using namespace std;

int main(){
	int matrix[4][4]={{0,1,2,3},{4,5,6,7},{8,9,10,11},{12,13,14,15}};
	int transposed[4][4] = {};
	for(int i = 0; i < 4; i++) {
	for(int j = 0; j < 4; j++) {
		transposed[j][i] = matrix [i][j];
	}
}
return 0;
}
