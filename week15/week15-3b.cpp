//week15-3b.cpp SOIT108_Advance_009
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int a[100];
	for (int i=0; i<N; i++) {
		scanf("%d", &a[i]);
	}
	for (int i=N-1; i>=0; i--) {
		if(a[i]%2==1)
			printf("%d ", a[i]);
	}
}
