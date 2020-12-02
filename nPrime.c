#include <stdio.h>

void nprime(int);
int main()
{
    int n;
    printf("Enter how many n prime numbers do you want:");
    scanf("%i", &n);

    nprime(n);

    return 0;
}

void nprime(int n)
{
    int i=1, counter=0, temp=1, idk, t;
    while (counter != n){
        i++;
        for (t=1; t<=i; t++) {
            if (i%t==0){
                idk++;
            }
        
        }
        if (idk==1){
            counter++;
            printf("%i\n", i);
        }
    }
}