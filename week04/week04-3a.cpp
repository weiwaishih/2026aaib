// week04-3a.cpp SOIT107_Base_001
# include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int d50 = N / 50;
    int d10 = (N%50) / 10;
    int d5 = (N%10) / 5;
    int d1 = (N%5);
    printf("%d=50*%d+10*%d+5*%d+1*%d",N,d50,d10,d5,d1);
}
