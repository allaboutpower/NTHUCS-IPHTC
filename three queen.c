#include <stdio.h>
int board[11][11];
void place(int row, int size);

void show_board(int size)
{
	int i, j;
	for (i=1; i<=size; i++) {
		for (j=1; j<=size; j++) {
			if (board[i][j]==0) {
			  printf("O");
			} else {
					printf("#");
			}
		}
		printf("\n");
	}
	printf("\n");
}
int main(void)
{
	place(1, 9);
	return 0;
}
int is_valid(int row, int i)
{
		int j;
	  for (j=row-1; j>=1; j--) {
				if (board[j][i]==1) {
						return 0;
				}
		}
		return 1;
}
void place(int row, int size)
{
	int i;
	if (row>size) {
		show_board(size);
	} else {
		for (i=1; i<=size; i++) {
			if (is_valid(row, i)) {
				board[row][i] = 1;
				place(row+1, size);  
				board[row][i] = 0;
			}
		}
	}
}