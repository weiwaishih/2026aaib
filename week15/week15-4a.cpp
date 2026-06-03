//week15-4a.cpp SOIT108_Advance_010
#include <stdio.h>
#include <string.h>
int main()
{
	char s[100];
	scanf("%s", s);
	int N = strlen(s);
	for (int i=0; s[i] != 0; i++) {
		if (i!=0 && (N-i)%3==0) printf(",");
		printf("%c", s[i]);
	}
}
