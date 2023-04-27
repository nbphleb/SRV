#include "getname.h"
#include <string.h>

int main()
{
	char truename[] = "Asonova Svetlana Borisovna I992";
	if (strcmp(truename, getName()) == 0)
	{
		printf("Name is correct!");
		return 0;
	}
	else
	{
		printf("Name is incorrect!");
		return 1;
	}
}