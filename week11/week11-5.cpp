//week11-5.cpp SOIT108_Advance_002
# include <Stdio.h>
int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    int ans = 0;
    for(int i=a;i<=b;i++){
        int bad = 0;
        for(int k=2;k<i;k++){
            if(i%k==0) bad = 1;
        }
        if(bad==0) ans++;
    }
    printf("%d\n", ans);
}
