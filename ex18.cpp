#include<stdio.h>
void asalmi(int a);
int main()
{
	int x;
	printf("bir sayi giriniz=");
	scanf("%d",&x);
	asalmi(x);
}
void asalmi(int a)
{
	int sayac;
	if(a<=0)
	{
		printf("asal degildir.");
	}
	
	for(int i=2;i<a;i++){
	if(a%i==0)
	{
		sayac++;
	}
	if((sayac==0)&&(a>0))
	{
		printf("%d asal sayidir.",a);
	}
	else 
	{
		printf("%d asal sayi degildir.",a);
	}
}
}



