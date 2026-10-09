#include <stdio.h>
int main()
{
    int number;
    int sum = 0;
    printf("enter any 4 digit number");
    scanf("%d", &number);

    sum = number % 10; 
    number /= 10;

    sum += number % 10;
    number /= 10;
    sum += number % 10;
    number /= 10;
    sum += number % 10;
    printf("sum of digits = %d", sum);
    return 0;  
}