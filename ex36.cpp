#include<stdio.h>//iki sayi girilsin girilen sayilarin çarpanlarý toplamý diðer sayiya eþit mi kontrol eden alg
int main()
{
	int x,y,a,b,sum=0,sum1=0;
	printf("birinci sayiyi giriniz=");
	scanf("%d",&x);
	printf("birinci sayiyi giriniz=");
	scanf("%d",&y);
	a=x;
	b=y;
	if(x<0 || y<0)
	{
		printf("pozitif sayi giriniz!!");
	}
	else 
	{
		if(a==x)
		{
			for(int i=1;i<x;i++)
			{
				if(x%i==0)
				{
					sum+=i;
				}
			}
		}
		if(b==y)
		{
		    for(int j=1;j<y;j++)
			{
				if(y%j==0)
				{
					sum1+=j;
				}
				
			}	
		}
		if(sum1==x && sum==y)
	{
		printf("dost sayilardir.");
	}
	else 
	{
		printf("dost sayilar degildir.");
	}
		 
	}
	return 0;
}
