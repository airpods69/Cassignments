#include <stdio.h>

int main()
{
    float A1,A2,A3;

    printf("Enter 3 integers:");
    scanf("%f%f%f", &A1, &A2, &A3);

    if (A1>A2) {
        if (A1>A3) {
            printf("The greatest integer is %f\n", A1);
        }
        else {
            printf("The greatest integer is %f\n", A3);
        }
    }
    else if (A2>A1) {
        if (A2>A3) {
            printf("The greatest integer is %f\n", A2);
        }
        else {
            printf("The greatest integer is %f\n", A3);
        }
    }
    
    return 0;
}