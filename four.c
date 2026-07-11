
#include <stdio.h>

int main() {
    int num = 8;
    int count = 0 ;
    while (num > 0){
        if(num % 2 == 0){
            count++ ;
            num /=2 ;
        }
        else{
            num -= 1;
            count++;
        }
    }

    printf("%d",count);

    return 0;
}