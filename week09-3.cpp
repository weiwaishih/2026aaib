// week09-3.cpp SOIT108_Advance_008
#include <stdio.h>
int main()
{
	int a[10];
	for (int i=0; i<10; i++) {
		scanf("%d", & a[i] );
	}
	//here!!! You will learn today
	for (int k=0; k<10; k++) {
		for (int i=0; i<10-1; i++) {
			if (a[i] < a[i+1]) {
				int temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
	}	// here!!! You will learn today
	for (int i=0; i<10; i++) {
		printf("%d ", a[i] );
	}
}
