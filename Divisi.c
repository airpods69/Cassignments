#include <stdio.h>

int main()
{
    int num;

    printf("Enter number:");
    scanf("%i", &num);

    if (num%5 == 0) {
        if (num%8 == 0) {
            printf("Given number is divisible by both 5 and 8");
        }
        else {
            printf("Give number is only divisible by 5");
        }
    }
    
    else if (num%8 == 0) {
        printf("Given number is only divisble by 8");
    }
    
    else {
        printf("Given number isnt divisble by either 5 or 8");
    }

    return 0;
}