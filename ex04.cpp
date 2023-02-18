#include<stdio.h>//girilen sayi 15 in katý mý degil mi bulan prg
int main()
{
	int x;
	printf("bir sayi giriniz=");
	scanf("%d",&x);
	if((x%3==0)&&(x%5==0))
	printf("15 in katidir.");
	else 
	printf("15 in kati degildir.");
	
	return 0;
	
}
