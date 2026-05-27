//week08-5.cpp SOIT106_ADVANCE_003
# include <stdio.h>
int main()
{
    int a[20];
    int N = 0;
    for(int i = 0;i<20;i++){
        scanf("%d", &a[i]);
        if(a[i] == 0) break;
        N++;
    }
    for(int i=N-1;i>=0;i--){
        printf("%d ", a[i]);
    }
    printf("\n");
}
