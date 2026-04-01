// week06-4b.cpp SOIT07_BASE_008
#include <stdio.h>
int main()
{
	printf("Enter the number of values to be processed: ");
	int N;
	scanf("%d", &N);
	int ans = 1;
	for (int i=0; i<N; i++){
		printf("Enter a value: ");
		int now;
		scanf("%d", &now);
		ans = ans * now;
	}
	printf("Product of the %d values is %d", N, ans);
}
