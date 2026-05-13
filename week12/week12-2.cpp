//week12-2.cpp SOIT106_ADVANCE_008_C
#include<stdio.h>
int f(int n)
{
	if (n<0) return -n;
	return n;
}

int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
