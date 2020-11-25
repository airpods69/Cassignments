#include <stdio.h>

int main()
{
    int n1, n2, n3, max1, max2;

    printf("Enter 3 integers:");
    scanf("%d%d%d", &n1,&n2,&n3);
    
    max1 = (n1>n2>n3) ? n1:n2;n3;

    printf("The greatest integer is %d\n", max1);

    return 0;
}