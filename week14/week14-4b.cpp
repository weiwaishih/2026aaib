// week14-4b.cpp SOIT106_ADVANCE_007
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int a = N/1000;
	int b = N/100 % 10;
	int c = N/10 % 10;
	int d = N%10;
	if (a==d && b==c) printf("YES\n");
	else printf("NO\n");
}
