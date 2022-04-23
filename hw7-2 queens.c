#include<stdio.h>
#include<stdlib.h>

#define QueensMax 16

int isAvailable(int layer, int col, int queensNum, int *cols, int *upperRight2BottomLeft, int *upperLeft2BottomRight){
    return ((!cols[layer]) && (!upperRight2BottomLeft[layer + col]) && (!upperLeft2BottomRight[layer - col + queensNum]))? 1 : 0;
}

int solveQueens(int layer, int queensNum, int *cols, int *upperRight2BottomLeft, int *upperLeft2BottomRight){
    if(layer > queensNum){
        return 1;
    }else{
        int solutions = 0;
        for(int i = 1; i <= queensNum; i++){
                if((!cols[i]) && (!upperRight2BottomLeft[layer + i]) && (!upperLeft2BottomRight[layer - i + queensNum])){
                cols[i] = 1;
                upperRight2BottomLeft[layer + i] = 1;
                upperLeft2BottomRight[layer - i + queensNum] = 1;
                solutions += solveQueens(layer + 1, queensNum, cols, upperRight2BottomLeft, upperLeft2BottomRight);
                cols[i] = 0;
                upperRight2BottomLeft[layer + i] = 0;
                upperLeft2BottomRight[layer - i + queensNum] = 0;
            }
        }
        return solutions;
    }
}

int main(){
    int N = 0;
    int cols[QueensMax] = {0};
    int upperRight2BottomLeft[2 * QueensMax] = {0};
    int upperLeft2BottomRight[2 * QueensMax] = {0};
    int layer = 1;
    
    scanf("%d", &N);

    int solutions = solveQueens(layer, N, cols, upperRight2BottomLeft, upperLeft2BottomRight);
    printf("%d\n", solutions);
    return 0;
}