#include<stdio.h>//ok kelimesi girilene kadar girilen tam sayilarin fakt alan prg
#include<string.h>
#include<stdlib.h>
#define MAX_LENGTH 100
int main()
{
	char veri[MAX_LENGTH];
	int fakt=1;
	do
	{
		printf("sayi giriniz (programin sonlanmasi icin ok yaziniz)=");
		scanf("%s",veri);
		if(strcmp(veri,"ok")==0){
		break;}
		for(int i=1;i<=atoi(veri );i++)
		{
			fakt*=i;
			printf("%d\n",i);
		}
		printf("%s nin faktoriyeli %d dir.",veri,fakt );
		fakt=1;
	}while(1);
	return 0;
}
