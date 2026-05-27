//week11-4.cpp SOIT108_ADVANCE_001
# include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int ans = 0;
    for(int i=1;i<=1000;i++){
        if(i*i == N) ans = i;
    }
    printf("%d", ans);
}
