#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2][2],trans[2][2],i,j;
	clrscr();

	printf("Enter Matrix:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

       /*	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		       trans[j][i]=a[i][j];
		}
	}*/

	printf("Transpose Matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
	getch();
}