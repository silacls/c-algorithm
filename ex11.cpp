#include<stdio.h>//klavyeden girilen iki sayi arasindaki sayilarin 7 nin katý olup olmadýðý 
int main()
{
	int a,b;
	printf("sayi giriniz=");
	scanf("%d",&a);
	printf("sayi giriniz=");
	scanf("%d",&b);
	printf("aradaki 7 nin kati olan sayilar:\n");
    if(a>b)
    {
    	for(int i=b;i<a;i++)
    	{
    		if(i%7==0)
    		{
			printf("%d\t",i);
			}
		}
	}
	else if(b>a)
	{
		for(int i=a;i<b;i++)
		{
			if(i%7==0)
			{
				printf("%d\t",i);
			}
		}
	}
	else
	printf("yoktur!!!");
	return 0;
}
