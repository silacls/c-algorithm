#include<stdio.h>//girilen x adet sayidan pozitif sayi negatif sayi ve 0 ý bulma 
int main()
{
	int sayi,x;
	printf("kac adet sayi girmek istiyorsun=");
	scanf("%d",&sayi);
	for(int i=0;i<sayi;i++)
	{
	    printf("bir sayi giriniz=");
	    scanf("%d",&x);
	    if(x<0)
	    {
	    	printf(" %d (negatif)\n",x);
	    	printf("\n");
		}
		else if(x>0)
		{
			printf("%d (pozititif)\n",x);
			printf("\n");
		}
		else if(x==0)
		{
			printf("%d (notr)\n",x);
			printf("\n");
		}
		else 
		{
			printf(" lütfen sayi giriniz!!\n");
			printf("\n");
		}
		x=0;
	}
	return 0;

}
