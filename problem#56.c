#include <stdio.h>
int counter = 0;
int n;
int q[16] = {0};
void place(int row);
int valid(int row, int col);

int main(void){
    scanf("%d", &n);
	place(0);
    printf("%d\n", counter );
	return 0;
}


int valid(int row, int col){
	int i;
	for (i=0; i<row; i++) {
		if ( q[i] == col || row-i == col-q[i] || row-i == q[i]-col )
		return 0;
	}
	return 1;
}


void place(int row){
	int j;
	if (row == n) {
		counter++;
	} else {
		for (j=0; j<n; j++) {
			if (valid(row, j)) {
				q[row] = j;
				place(row+1);
			}
		}
	}
}