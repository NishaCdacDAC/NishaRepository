/*Add 2 Nos*/

#include <stdio.h>
int main() {    

    int number1, number2, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    
    sum = number1 + number2;      
    
    printf("%d + %d = %d", number1, number2, sum);// Sum of two nos
    return 0;
}
