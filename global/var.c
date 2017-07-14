#include "var.h"

static int s_Val = 0;

void SetVal(int val)
{
	s_Val = val;
	printf("s_Val: %d\n", s_Val);
}

int GetVal(void)
{
	return s_Val;
}
