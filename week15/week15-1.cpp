// week15-1.cpp SOIT106_ADVANCE_006
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int ans = 0;
	for (int i=1; i<N; i++){
		ans += i * (i+1);
	}
	printf("%d\n", ans);
}
