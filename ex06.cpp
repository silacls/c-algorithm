#include<stdio.h>//girilen sayinin tek mi cift mi oldugunu bulan alg
int main()
{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	if(num<0)
	{
		printf("lütfen pozitif sayı giriniz.");
	}
	
	else if(num%2==0)
	{
		printf("cift sayidir.");
	}
	else 
	{
		printf("tek sayidir.");
	}
	
}
