#include<stdio.h>
//girilen sayinin mükemmel sayi olup olmadýðýný bulan alg
int main()
{
	int sayi,toplam=0;
	printf("bir sayi giriniz=");
	scanf("%d",&sayi);
	for(int i=1;i<sayi;i++)
	{
		if(sayi%i==0)
		{
			toplam+=i;
		}
	}
	if(toplam==sayi)
	{
		printf("mukemmel sayidir.");
	}
	else 
	{
		printf("mukemmel sayi degildir.");
	}
	return 0;
}
