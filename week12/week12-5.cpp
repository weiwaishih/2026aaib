/// week12-5.cpp 用輾轉相除法, 找最大公因數
#include <stdio.h>
int gcd(int a, int b)
{
    printf("now a: %d b:%d \n", a, b);
    if (a==0) return b;
    if (b==0) return a;
    return gcd( b, a%b );
}
int main()
{
    printf("Input two numbers: ");
    int a, b;
    scanf("%d%d", &a , &b);

    printf("ans: %d\n", gcd(a,b) );
}
