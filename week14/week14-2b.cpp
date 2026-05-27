// weeek14-2b.cpp A025
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	if (N%400==0) printf("Yes");
	else if (N%100==0) printf("No");
	else if (N%4==0) printf("Yes");
	else printf("No");
}
