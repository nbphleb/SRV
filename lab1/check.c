#include <stdio.h>
#include <string.h>
#include "getname.h"

int main(void)
{
	char truename[] = "Asonova Svetlana Borisovna I992";
	if (strcmp(truename, getName()) == 0)
	{
		printf("Name is correct \n");
		return 0;
	}
	else
	{
		printf("Name is incorrect \n");
		return 1;
	}
}
