#include<stdio.h>
#define MAX_LENGTH 10
//girilen sayilardan en büyüðünü bulan alg 
int main()
{
	int sayilar[MAX_LENGTH];
	int max;
	for(int i=0;i<MAX_LENGTH;i++)
	{
		printf("sayi %d:",i+1);
		scanf("%d",&sayilar[i]);
	}
	max=sayilar[0];
	
	for(int i=1;i<5;i++)
	{
		if(sayilar[i]>max){
			max=sayilar[i];
		}
		
	}
	printf("en buyuk sayi:%d dir.",max);
	return 0;

}
