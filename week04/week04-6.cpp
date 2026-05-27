//week04-6.cpp SOIT_BASE_003
# include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int ans = 0, now;
    for (int i=0; i<N; i++){
        scanf("%d", &now);
        ans += now;
    }
    printf("%d\n", ans);
}
