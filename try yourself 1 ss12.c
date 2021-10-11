// try yourself 1 ss12
#include<stdio.h>

main()
{
	int ary[5];
	int i;
	
	for(i = 0; i < 5; i++)
	{
	    printf("\nEnter number: ");
		scanf("%d", &ary[i]);	
	}
	
	int max = ary[0], min = ary[0];
	for(i = 0; i < 5; i++)
	{
		if(ary[i] > max)
		   max = ary[i];
	}
	printf("\nThe maximum is: %d", max);
	
	for(i = 0; i < 5; i++)
	{
		if(ary[i] < min)
		   min = ary[i];
	}
	printf("\nThe minimum is: %d", min);
	
	return 0;
}
