//week14-3b.cpp SOIT106_ADVANCE_004
#include <stdio.h>
int main()
{
	char c;
	while (scanf("%c", &c) == 1 ) {
		if (c>='A' && c<='Z') c = c - 'A' +'a';
		else if (c>='a' && c<='z') c = c - 'a' + 'A';
		printf("%c", c);
	}
}
