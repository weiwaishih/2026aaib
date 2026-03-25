// week05-2a.cpp SOIT06_BASE_009
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	int big = a, small = a;
	if (b>big) big = b;
	if (c>big) big = c;

	if(b<small) small = b;
	if(c<small) small = c;
	printf("%d\n", big - small);
}
