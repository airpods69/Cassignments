#include <stdio.h>

void HCF1(int, int);
int main()
{
    int n1, n2;
    printf("Enter two positive integers:");
    scanf("%d %d",&n1,&n2);

    HCF1(n1,n2);
    return 0;
}

void HCF1(int n1, int n2)
{   
    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("HCF=%d", n1);
}