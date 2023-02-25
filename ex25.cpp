#include<stdio.h>
//kuvvet hesabý yapan alg
int main()
{
	int a,b;
	double sonuc=1.0;
	printf("Tabani giriniz=");
	scanf("%d",&a);
	printf("Kuvveti giriniz= ");
	scanf("%d",&b);
	if(a==0 && b==0)
	{
	printf("belirsiz");}
	else if(b<0)
	{
	for(int i=0;i<-b;i++)
	{
		sonuc*=1.0/a;
	}
		printf("%d ussu %d =%.2lf .",a,b,sonuc);
}
	else{
	for(int i=0;i<b;i++)
	{
	  sonuc*=a;
	}
		printf("%d ussu %d =%.2lf .",a,b,sonuc);
}
	
	
}

