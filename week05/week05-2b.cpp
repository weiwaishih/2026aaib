// week05-2b.cpp SOIT06_BASE_009
#include <stdio.h>
int main()
{
	int a[3];
	int big = -9999999, small = 9999999;
	for (int i=0; i<3; i++){
		scanf("%d", &a[i] );
		if (a[i] > big) big = a[i];
		if (a[i] < small) small = a[i];
	}
	printf("%d\n", big - small);
}
