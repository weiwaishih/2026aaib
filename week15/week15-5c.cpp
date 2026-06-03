// week15-5c.cpp SOIT108_Advance_014
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int total = 0;
	for (int i=0; i<=N; i++) {
		total +=2*i + 1;
	}
	printf("f(%d)=%d", N, total);
}
