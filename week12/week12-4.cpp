/// week12-4.cpp 最大公因數
/// ex. 51/68 可約分成為 3/4 因為最大公因數17
#include <stdio.h>
int main()
{
    printf("請輸入兩個數(ex. 51 68):");
    int a, b;
    scanf("%d%d", &a, &b);
    int ans = 1; ///1一定可以整除任何數, 是答案候選人
    for (int i=1; i<=a; i++) { /// 把1...a全試過
        if ( a%i==0 && b%i==0) ans =i;
        ///如果i可以整除a 也可以整除b, 就是最大公因數
    }
     printf("最大公因數是 %d\n", ans);
     printf("%d / %d約分之後, 變 %d / %d \n", a, b, a/ans, b/ans);
}
