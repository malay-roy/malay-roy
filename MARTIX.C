#include<stdio.h>
#include<conio.h>
void main()
{
	int max[2][2],max1[2][2],sum[2][2];
	int i,j;
	clrscr();

	printf("Enter Martix 1:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&max[i][j]);
		}
	}

	printf("Martix 1:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d",max[i][j]);
		}
		printf("\n");
	}

	printf("Enter Martix 2:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&max[i][j]);
		}
	}

	printf("Martix 2:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d",max[i][j]);
		}
		printf("\n");
	}
	getch();
}