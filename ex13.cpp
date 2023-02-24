#include<stdio.h>//kýlavyeden girilen iki aralýktaki çift sayilarý bulan alg
int main()
{
	int a,b,toplam=0;
	printf("bir sayi giriniz=");
	scanf("%d",&a);
	printf("bir sayi giriniz=");
	scanf("%d",&b);
	if(a>b)
	{
		for(int i=b+1;i<a;i++)
		{
			if(i%2==0)
			{
				printf("%d\t",i);
				toplam+=i;	}}
				printf("\n toplamlari:%d",toplam);
	}
	else if(a<b)
	{
		for(int i=a+1;i<b;i++)
		{
			if(i%2==0)
			{
				printf("%d\t",i);
				toplam+=i;
			}
		}
		printf("\n toplamlari:%d",toplam);
	}
	else 
	printf("yoktur!!!");
	
}
