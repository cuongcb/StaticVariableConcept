#include "var.h"
#include <stdio.h>
#include <pthread.h>

void *PrintStaticVar(void *arg)
{
	int b;
	b = GetVal();
	printf("Value of b before: %d\n", b);
	SetVal(5);
	b = GetVal();
	printf("Value of b after: %d\n", b);

	return NULL;
}

int main()
{
	int a;
	pthread_t tid = 0;

	a = GetVal();
	printf("Value of a before: %d\n", a);
	SetVal(10);
	a = GetVal();
	printf("Value of a after: %d\n", a);

	pthread_create(&tid, NULL, &PrintStaticVar, NULL);
	pthread_join(tid, NULL);

	return 0;
}
