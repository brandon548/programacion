#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i, vector[9];
	
	srand(time(NULL));
	
	for(i = 0;i < 10; i++)
	{
		vector[i] = 45 + (rand() % 16);
	}
	
	for(i = 0;i < 10; i++){
		printf("%d %d\n",i+1,vector[i]);
	}
	
	return 0;
}
