#include<stdio.h>//girilen sayinin faktoriyelini bul
int main()
{
	int x,fakt=1;
	printf("bir sayi giriniz=");
	scanf("%d",&x);
	for(int i=1;i<=x;i++)
	{
		printf("%d",i);
		printf("\n");
		fakt*=i;
	}
	printf("%d nin faktoriyeli %d dir",x,fakt);
	return 0;
}
