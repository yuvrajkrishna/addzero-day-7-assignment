
#include <stdio.h>

int main() {
    
    int n = 234;
    int product = 1 ; 
    int sum = 0 ;
    
    while (n > 0){
        int lastdigit = n % 10 ;
        product *= lastdigit ; 
        sum += lastdigit ;
        n /= 10 ;
    }

    printf("%d",product-sum);

    return 0;
}