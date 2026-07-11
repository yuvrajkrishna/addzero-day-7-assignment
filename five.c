#include<stdio.h>
int isselfdivide(int n){
    int num = n;
    while(n > 0){
        int ls = n % 10 ;
        if(ls == 0){
            return 0;
        }

        if (num % ls == 0) {
            n /= 10;
        }
        else{
            return 0;
        }
    }

    return 1; 
}
int main ( ) {
    int left = 1;
    int right = 22;
    for(int i = left ; i <= right ; i++){
        int result = isselfdivide(i);
        if(result == 1){
            printf("%d ",i);
        }
        
    }
    return 0 ;
}