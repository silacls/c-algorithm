#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_LENGTH 100
//dur girilene kadar girilen sayilardan en büyük olaný ve sýrasýný yazan alg
int main()
{
	int  sayilar[MAX_LENGTH];
	int max=0,sayac=0,sayi;
	char veri[MAX_LENGTH];
	do
	{
    	printf("bir sayi giriniz(cikmak icin 'dur' yaziniz)=");
		scanf("%s",veri);
	
		if(strcmp(veri,"dur")==0)
		{
			break;
		}
		    sayi=atoi(veri);
		    sayac++;
		    
			if(sayi>max)
			{
				max=sayi;
			}
			
	}
	while(1);
	
		
    	printf("en buyuk sayi %d dir.",max);
		printf("%d %d inci sirada girilmistir.",max,sayac);
	return 0;	
}
