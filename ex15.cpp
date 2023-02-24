#include<stdio.h>//ok kelimesi girilene kadar veri girilen alg
#include<string.h>
#define MAX_LENGTH 100
int main()
{
	char veri[MAX_LENGTH];
	do
	{
		printf("bir kelime giriniz=");
		scanf("%s",veri);
	}
	while (strcmp(veri,"ok") !=0);
	printf("program sonlandi!!");
}
