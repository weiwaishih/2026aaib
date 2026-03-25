// week05-3a.cpp SOIT06_ADVANCE_003
#include <stdio.h>
int main()
{
	int a[10], N=10;
	for (int i=0; i<10; i++) {
	scanf("%d", &a[i] );
		if (a[i]==0){
			N = i;
			break;
		}
	}
	for(int i=N-1; i>=0; i--) {
		printf("%d ",a[i]);
	}
	printf("\n");
}
