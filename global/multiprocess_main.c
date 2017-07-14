#include "var.h"
#include <stdio.h>
#include <unistd.h>

int main()
{
	int a, b;
	pid_t pid;

	pid = fork();
	if (pid == 0) //parent
	{
		a = GetVal();
		printf("Value of a before: %d\n", a);
		SetVal(10);
		a = GetVal();
		printf("Value of a after: %d\n", a);
	}
	else if (pid > 0) // child
	{
		b = GetVal();
		printf("Value of b before: %d\n", b);
		SetVal(5);
		b = GetVal();
		printf("Value of b after: %d\n", b);
	}
	else
	{
		return -1;
	}

	return 0;
}
