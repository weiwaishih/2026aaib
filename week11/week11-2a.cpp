//week11-2a.cpp SOIT_ADVANCE_001
# include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    // 剝皮法,只要還有N,繼續剝
    while (N>0){ // Part A
    //剝下來的皮 N%10
        printf("%d", N%10);
        //剝皮後的結果 N/10
        N = N / 10;
    }
}
