#include <stdio.h>
main()
{
	int x[3][3],i,j;
	printf("enter 9 interger");
	//row
	for(i=0;i<3;i++)
	{
		//collom 
		for(j=0;j<3;j++)
		{
			scanf("%d ",&x[i][j]);
		}  
	}
	
	printf("the matrix is:\n");
	for(i=0;i<3;i++)
	{
		//collom 
		for(j=0;j<3;j++)
		{
			printf("%d  ",x[i][j]);
		}
		printf("\n");
	}
}
