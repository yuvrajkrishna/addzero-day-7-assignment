
#include <stdio.h>

int main() {
    int n = 5 , m = 6;
    int sum1= 0 , sum2 = 0; 
    for(int i = 1 ; i<=n;i++){
        if(i%m==0){
            sum1 += i;
        }
        else{
            sum2 += i;
        }
    }
    printf("%d",sum2 - sum1);
    return 0;
}