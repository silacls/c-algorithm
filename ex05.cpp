#include<stdio.h>//girilen 2 sayinin birbirinin katý olup olmadigini bulan prg
int main()
{
	int x,y;
	printf("bir sayi giriniz=");
	scanf("%d",&x);
	printf("bir sayi giriniz");
	scanf("%d",&y);
	if(x>=y)
	{	
		if(x%y==0)
		printf("birbirinin katidir.");
	else 
	{
		printf("birbirinin kati degildir.");
	}
}
	if(x<y)
	{
	  if(y%x==0)
	  printf("birbirinin katdir.");	
	  else
	  printf("birbirinin kati degildir.");
	}
	return 0;
}
