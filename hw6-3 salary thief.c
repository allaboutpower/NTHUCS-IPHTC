#include<stdio.h>
#include<stdlib.h>

int main(){
    int t = 0;
    long long int mod = 1000000007;

    scanf("%d\n", &t);
    for(int i = 0; i < t; i++){
        long int x = 0;
        long int strLen = 0;
        long long int storedStrLen = 0;
        char tempC;
        char str[1000005] = {0};

        scanf("%ld\n", &x);//5
        while((tempC = getchar()) != EOF){
            if(tempC == '\n') break;

            str[strLen] = tempC;//231
            strLen++;//3
            storedStrLen++;//3
        }
        long long int lenCount = strLen;//3
        for(long int j = 0; j < x; j++){//5
            char copyTimesChar = str[j];
            int copyTimes = atoi(&copyTimesChar);//2
            long long int copiedStrLen = (lenCount - j - 1)% mod;//2
            int escFlag = 0;
            long long int copyStrStart = j + 1;//1
            for(int h = 0; h < copyTimes - 1; h++){//1
                for(long long int k = 0; k < copiedStrLen; k++){//0,1
                    if(storedStrLen < x){
                        str[storedStrLen] = str[copyStrStart + k];
                        storedStrLen++;
                    }else{
                        escFlag = 1;
                        break;
                    }
                }
                if(escFlag){break;}
            }


            lenCount += (copiedStrLen * (copyTimes - 1)) % mod;
           
        }

        printf("%lld\n", lenCount % mod);
    }

    return 0;
}