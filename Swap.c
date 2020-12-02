#include <stdio.h>

void SwapWith(int a, int b);
void SwapWithout(int a, int b);

int main()
{
    int a1, a2, option;
    printf("Enter two numbers which u want to swap (a1,a2):");
    scanf("%i%i", &a1,&a2);
    
    printf("Before swap a=%i b=%i\n",a1,a2);
    
    printf("Enter 1 if u want to swap with temp variable\n");
    printf("Enter 2 if u want to swap without temp\n");
    printf("Option? ");
    scanf("%i", &option);

    if (option==1) {
        SwapWith(a1,a2);
    }
    else {
        SwapWithout(a1,a2);
    }

    return 0;

}

void SwapWithout(int a1, int a2)
{
    a1=a1+a2;
    a2=a1-a2;
    a1=a1-a2;
    printf("After swap a=%i b=%i",a1,a2);
}

void SwapWith(int a1, int a2) 
{
    int temp;

    temp = a1;
    a1=a2;
    a2=temp;
    printf("After swap a=%i b=%i",a1,a2);
}