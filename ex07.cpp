#include<stdio.h>
#include<math.h>
//girilen iki sayi arasindaki sayilarin karekökünü yazdiran prg
int main()
{
    int num,num1;
    float sonuc;
	printf("bir sayi giriniz=");
	scanf("%d",&num);
	printf("bir sayi giriniz=");
	scanf("%d",&num1);
	if(num<0||num1<0)
	{
		printf("gecerli sayilar giriniz!!");
	}
	
	 else if(num<num1)
	{
		for( int i=num+1;i<num1;i++)
		{
		  sonuc=sqrt(i);
		  printf("%.2f",sonuc);
		  printf("\n");
		}
		
	}
	else if(num>num1)
	{
		for(int j=num1+1;j<num;j++)
		{
			sonuc=sqrt(j);
			printf("%.2f",sonuc);
			printf("\n");
		}
	}
	else 
	printf("0");
	
}
