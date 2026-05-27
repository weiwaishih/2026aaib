// week14-6.cpp SOIT108_Advance_014B
#include<stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int zeros = 1;
	while (N>0) {
		printf("%d ", N%10*zeros);
		N = N / 10;
		zeros = zeros * 10;
	}
}
