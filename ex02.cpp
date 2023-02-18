#include<stdio.h>//vize ve final notuna göre geçme notu 
int main()
{
	int vize,final,butnot,gecmenot;
	printf("vize notunu giriniz=");
	scanf("%d",&vize);
	printf("final notunu giriniz=");
	scanf("%d",&final);
	gecmenot=(vize*4/10)+(final*6/10);
	if(gecmenot>=50)
	{
		printf("gectiniz");
	}
	else if(gecmenot<50)
	{
		printf("but notunu giriniz=");
		scanf("%d",&butnot);
		gecmenot=(vize*4/10)+(butnot*6/10);
		if(gecmenot>50)
		{
			printf("gectiniz");
		}
		else
		printf("kaldinizn");
	}
	return 0;

}
	

