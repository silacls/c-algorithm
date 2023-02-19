#include<stdio.h>//girilen iki sayi arasýndaki sayilarin faktoriyelini bulunuz
int main()
{
	int x,y,fakt=1,fakt1=1;
	printf("bir sayi giriniz=");
	scanf("%d",&x);
	printf("bir sayi giriniz=");
	scanf("%d",&y);
	if(x<0||y<0)
	{
		printf("pozitif sayi giriniz!!");
	}
	else if(x>y)
	{
		
		for(int i=y+1;i<x;i++)
		{
			for(int j=1;j<=i;j++)
			{
				fakt*=j;
				printf("%d",j);
				printf("\n");
			}
			
				printf("%d nin faktoriyeli %d dir.",i,fakt);
				fakt=1;
				printf("\n");
		}
	}
	else if(x<y)
	{
		for(int k=x+1;k<y;k++)
		{
			for(int l=1;l<=k;l++)
			{
				fakt1*=l;
				printf("%d",l);
				printf("\n");
			}
			
				printf("%d nin faktoriyeli %d dir.",k,fakt1);
				fakt1=1;
				printf("\n");
		}
	}
	else 
	printf("0");
	return 0;
}
