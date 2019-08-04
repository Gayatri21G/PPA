//Q.Given an array of integers,print all alternate prime numbers from that list


#include<stdio.h>
#include<stdlib.h>

void primefind(int a[],int n)
{
	int i,s,g,j,count=0,p[100];
	for(i=0;i<n;i++)
	{   
		s=a[i];
		g=0;
		for(j=2;j<s;j++)
		{
			if(s%j==0)
			{
				g=1;
				break;
			}
		}
		if(s==j)
		{
			printf("%d\t",s);
			p[count]=s;
			count++;
		}
	}
		printf("\n The alternative prime numbers are:");
		for(j=0;j<count;j++)
		{
			if(j%2==0)
			{
				printf("%d\t",p[j]);
			}
		}		
}

int main()
{
	int a[30],i,n;
	printf("\n Enter n:");
	scanf("%d",&n);
	printf("\n Enter an array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	primefind(a,n);
	return 0;	
}

/* Output:-
gayatri@ideapad320:~/Preparation/pc ds prog c$ gcc prime1.c
gayatri@ideapad320:~/Preparation/pc ds prog c$ ./a.out

 Enter n:12

 Enter an array:4 5 7 2 4 9 11 10 17 6 8 7
5	7	2	11	17	7	
 The alternative prime numbers are:5	2	17	gayatri@ideapad320:~/Preparation/pc ds prog c$ 
*/