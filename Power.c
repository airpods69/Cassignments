#include <stdio.h>

int power(int n1, int n2);

int main() {

    int b, a, re;

    printf("Enter number: ");
    scanf("%d", &b);

    printf("Enter power number:");
    scanf("%d", &a);

    result = power(b, a);
    printf("%d^%d = %d", b, a, re);

    return 0;

}

int power(int b, int a) {

    if (a!=0){
        return (b*power(b,a-1));
    }
    else{
        return 1;
    }
}
