#include "var.h"
#include <stdio.h>
#include <unistd.h>

int main()
{
	int a = GetVal(); 

	printf("Value of a before: %d\n", a);
	SetVal(10);
	a = GetVal();
	printf("Value of a after: %d\n", a);

	return 0;
}
