#include <stdio.h>

int main()
{
    int new, even, x=2;
    int option;
    
    printf("Enter a number:");
    scanf("%i", &new);
    
    printf("Enter the way u want the program to execute(for if -> 1 for tentative-> 2):");
    scanf("%i", &option);
    
    if (option == 1) {
        printf("Program will be executed with if-else method");
        if (new%2==0) {
            printf("Number is ever\n");
        }
        else {
            printf("Number is odd");
        }
    }

    else{
        printf("Program will be executed using ternary method\n");
        even = (new%x) ? new:x;
        if (even == 0) {
            printf("Number is even");
        }
        else {
            printf("Number is odd");
        }
    }

    return 0;
       

}