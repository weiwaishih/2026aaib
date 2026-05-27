//week11-2c.cpp SOIT_ADVANCE_001
# include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int ans = 0;// Part B
    int N2 = N; //Part C
    while (N>0){
        ans = ans * 10 + N%10;// Part B
        N = N / 10;
    }
    printf("%d+%d=%d\n", N2, ans, ans+N2);
}
