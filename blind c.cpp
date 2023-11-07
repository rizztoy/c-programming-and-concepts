#include<stdio.h>
main()
{
	int number;
	int a=0, size;
	int odd;
	printf("enter the number you want square pattern for :: ");
	scanf("%d",&number);
	odd=number*2-1;
	size=odd;
	int ar[size][size];
	for(;number>=1;number--)
	{
	for(int i=a;i<odd;i++)
	{
		for(int j=a;j<odd;j++)
		{
		if(i==a || i==odd-1 || j==a || j==odd-1  )
		ar[i][j]=number;	
		}
	}
		odd-=1;
		a++;
	}
	printf("\n");
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
		printf("%d ",ar[i][j]);
		}
		printf("\n");
	}
}
//output :

//enter the number you want square pattern for :: 6
//
//6 6 6 6 6 6 6 6 6 6 6
//6 5 5 5 5 5 5 5 5 5 6
//6 5 4 4 4 4 4 4 4 5 6
//6 5 4 3 3 3 3 3 4 5 6
//6 5 4 3 2 2 2 3 4 5 6
//6 5 4 3 2 1 2 3 4 5 6
//6 5 4 3 2 2 2 3 4 5 6
//6 5 4 3 3 3 3 3 4 5 6
//6 5 4 4 4 4 4 4 4 5 6
//6 5 5 5 5 5 5 5 5 5 6
//6 6 6 6 6 6 6 6 6 6 6

