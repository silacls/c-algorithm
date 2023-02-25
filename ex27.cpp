#include<stdio.h>//1 ile 10000000 arasý mukemmel sayilar 
int main()
{
	int toplam=0;
	printf("mukemmel sayilar\n");
	for(int i=1;i<=100000;i++)
	{
		for(int j=1;j<i;j++)
		{
			if(i%j==0)
			{
				toplam+=j;
			}
		}
		if(toplam==i)
		{
			printf("%d",i);
			printf("\n");
		}
		toplam=0;
	}
}
