#include<stdio.h>
main()
{
	int numbers[5];
	int i, j;
	
	for(i = 0; i < 5; i++)
	{
		printf("Nhap vao cac so: ");
		scanf("%d", &numbers[i]);
	}
	   printf("\n After reversed: %d %d %d %d %d", numbers[4], numbers[3], numbers[2], numbers[1], numbers[0]);
	return 0;
}
