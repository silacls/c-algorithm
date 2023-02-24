#include<stdio.h>//girilen sayilarin en küçüðünü bulan alg
#define MAX_LENGTH 10
int main()
{
	int sayilar[MAX_LENGTH];
	int min;
	for(int i=0;i<MAX_LENGTH;i++)
	{
		printf("%d. sayiyi giriniz=",i+1);
		scanf("%d",&sayilar[i]);
	}
	min=sayilar[0];
	for(int i=1;i<MAX_LENGTH;i++)
	{
		if(sayilar[i]<min)
		{
			min=sayilar[i];
		}
	}
	printf("en kucuk sayi %d dir.",min);
	
	
}
