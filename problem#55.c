#include<stdio.h>

int countL = 0, countR = 0;


int main(void){
    char camd[100001]={0};
    int n;

    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%s", &camd[i]);
    }
    for(int j=0; j<n; j++){
        if(camd[j] == 'L'){
            countL++;
        }
        else{countR++;}
    }
// printf("%d %d ", countR, countL);
    printf("%d\n", countL+countR+1);
    return 0;
        

}

