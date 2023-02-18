#include<stdio.h>//girilen sayinin 10 durumu 
int main ()
{
	int sayi ;
	printf("bir sayi giriniz=");
	scanf("%d",&sayi);
	if(sayi>10)
	printf("10 dan buyuktur.");
	else if(sayi<10)
	printf("10 dan kucuktur.");
	else 
	printf("10 a esittir.");
}

