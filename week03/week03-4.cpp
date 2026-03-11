// week03-4.cpp SOIT106_BASE_005
#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	int ans = 0;
	for (int i = 1; i<=N; i++) {
		if(N%i==0) ans++;
	}
	printf("%d\n", ans);
}
