#include <stdlib.h>
#include <stdio.h>

int main()
{
	FILE * input = fopen("123.txt", "rt");
	char line[10];
	char num[10];
	int nums[10];
	int i, j;
	char * ptr;

	for( i = 0; i < 10; i ++ )
		nums[i] = '\0';
	fgets(line, 10, input);
	ptr = line;
	for( i = 0; i < 3; i ++ )
	{
		j = 0;
		while (*ptr != '\n' && *ptr != '\0')
		{
			while( *ptr != ' ' && j < 10)
			{
				num[j] = *ptr;
				j++;
				ptr++;
			}
		nums[i] = atoi(num);
		printf("%d\n",nums[i]);
		ptr++;
		j = 0;
		}
	}

	for( i = 0; i < 3; i ++ )
		printf("%d, ", nums[i]);
	printf("\n");	
}
