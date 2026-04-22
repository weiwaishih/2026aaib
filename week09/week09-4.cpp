///  week09-4.cpp 要交換陣列裡的數字
#include <stdio.h>
int main()
{
    int a=99, b=34;
    printf("一開始 a: %d b: %d\n", a, b);
    int temp = a; /// 在準備第3個瓶子 temp 先接住a的咖啡
    a = b; /// a瓶子,就可以接住b的清水
    b =temp; /// b瓶子就可以接住 temp裡暫時放的咖啡

    printf("交換後 a: %d b: %d\n", a, b);

}
