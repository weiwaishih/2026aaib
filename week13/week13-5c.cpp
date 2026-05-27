//week13-5c.cpp SOIT106_ADVANCE_009
# include <stdio.h>
int f(int N)
{
    int ans = 0;
    while (N>0){
        ans = ans * 10 + N % 10;
        N = N / 10;
    }
    return ans;
}
int main()
{
    int N;
    scanf("%d", &N);
    printf("%d\n", f(N));
}
