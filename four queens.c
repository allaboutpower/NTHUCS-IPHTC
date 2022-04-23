#include <stdio.h>

void place(int row);
int valid(int row, int col);
void show(void);
int q[4]={0};  //紀錄ｉ出現皇后後，要擺在哪一行
  

int main(void){
    place(0);
    return 0;
}

int valid(int row, int col){
    int i;
    for(i=0; i<row; i++){
        if ( q[i] == col || row-i == col-q[i] || row-i == q[i]-col )
		return 0;
    }
}

void show(void){
    int i,j;
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(q[i]==j){
                printf("@");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
    printf("---------------");

}

void place(int row){
    int j;
    if(row == 4){
        show();
    }
        else{
            for(j=0; j<4; j++){
                if( valid(row, j)){

                }
            }
        }
    

} 