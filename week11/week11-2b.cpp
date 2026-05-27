//week11-2b.cpp SOIT_ADVANCE_001
# include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int ans = 0;// Part B
    while (N>0){
        ans = ans * 10 + N%10;// Part B
        N = N / 10;
    }
    printf("%d+%d=%d\n", N, ans, ans+N);
}
