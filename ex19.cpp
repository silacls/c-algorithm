#include<stdio.h>//dur kelimesi girilene kadar girilen sayilarin asal olup olmadýðýný bulan prg
#include<string.h>
#include<stdlib.h>
#define MAX_LENGTH 100
int main()
{
	int sayac=0;
	char veri[MAX_LENGTH];
	while(1)
	{
		printf("sayi giriniz(cikmak icin dur yaziniz)=");
		scanf("%s",veri);
		if(strcmp(veri,"dur")==0)
		{
			break;
		}
		for(int i=2;i<atoi(veri);i++)  
		{
			if(atoi(veri)%i==0)
			{
				sayac++;
			}
	    }
	    	if((sayac==0)&&(atoi(veri)>1))
			{
				printf("%s sayisi  asaldir.\n",veri);
			}
			else 
			{
				printf(" %s sayisi asal degildir.\n",veri);
			}
			sayac=0;
		
	}
    return 0;
}
