#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_LENGTH 100
//ok kelimesi girilene kadar girilen tam sayilari toplayan ve karesini alan  alg
int main()
{
	int toplam=0;
	int kare;
	char veri[MAX_LENGTH];
	do
	{
		printf("sayi giriniz(girilen sayilarin toplami icin ok yaziniz)");
		scanf("%s",veri);
		if(strcmp(veri,"ok")==0)
		{
		   break;	   
		}
	kare=atoi(veri)*atoi(veri);	   
	toplam+=atoi(veri);
	printf(" %s karesi=%d dir.",veri,kare);
	printf("\n");
	kare=0;
	
	}
	while (1);
	printf("toplam=%d",toplam);
	return 0;
	
	
	
}
