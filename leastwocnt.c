//Q.Find all elements in array which have at least two greater elements

#include<stdio.h>
int main()
{
	int i,j,n,m1=0,m2=0;
	printf("\n Enter n:");
	scanf("%d",&n);
	int a[n];
	printf("\n Enter an array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(m1<a[i])
		{
			m1=a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(m2<a[i]&&a[i]<m1)
		{
			m2=a[i];
		}
	}

	printf("\n The elements which have at least two greater elements are:\t");
	for(i=0;i<n;i++)
	{
		if(m2!=a[i] && a[i]!=m1)
		{
			printf("%d\t",a[i]);
		}
	}
	return 0;
}

/*
Output:

gayatri@ideapad320:~/Preparation/pc ds prog c$ ./a.out

 Enter n:5

 Enter an array:2 8 1 7 5

 The elements which have at least two greater elements are:	2	1	5	


*/