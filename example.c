#include<stdio.h>
#include<string.h>
#define num 1<<20
#define DUMBCOPY for (i = 0; i < num; i++) \
destination[i] = source[i]

#define SMARTCOPY memcpy(destination, source, num)

int main()
{
	char source[num], destination[num];
	int i, j;
	for (j = 0; j < 500; j++)
		SMARTCOPY;
//		DUMBCOPY;
	return 0;
}
