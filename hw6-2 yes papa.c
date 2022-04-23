#include <stdio.h>
#include <stdlib.h>

int compare(char *a, char *b, int al, int ar, int bl, int br){
    
    int lanA = ar - al + 1;
    int lanB = br - bl + 1;
    int re_is_same = 1;

    if(lanA % 2 == 1){
        for(int iA = al, iB = bl; iA <= ar, iB <= br; iA++, iB++){
            if(a[iA] != b[iB]){re_is_same = 0;}
        }
    }
    else{
        int amid = (al + ar)/2;
        int bmid = (bl + br)/2;

        if(compare(a, b, al, amid, bl, bmid) && compare(a, b, amid + 1, ar, bmid + 1, br)){
            re_is_same = 1;}
        else{re_is_same = 0;}

        if(compare(a, b, al, amid, bmid + 1, br) && compare(a, b, amid + 1, ar, bl, bmid)){
            re_is_same = 1;}
        else {re_is_same = 0;}
    }
        
    return re_is_same;
}
int main(void){
    char t;
    int i = 0;
    int j = 0;
    int re_is_next = 0;
    char a[1003] = {0};
    char b[1003] = {0};
    
    while((t = getchar()) != EOF){
        if(t == '\n'){
            re_is_next = 1;
        }
        else if(!re_is_next){
            b[j] = t;
            j++;
        }
        else{
            a[i] = t;
            i++;
        }
    }
    if(compare(a, b, 0, i-1, 0, j-1)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;   
}