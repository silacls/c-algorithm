#include<stdio.h>
#include<math.h>
//x adet sayinin aritmetik ve geometrik ortalamasi
int main()
{
	int x,toplam,sayi;
	float art,geo;
	printf("kac adet sayi isteniyor=");
	scanf("%d",&x);
	int i=1;
	while(i<=x)
	{
		printf("sayi giriniz=");
		scanf("%d",&sayi);
		toplam+=sayi;
		sayi=0;
		i++;
    }
    art=toplam/x;
    geo= pow(toplam,1.0/x);
    printf("%.2f\n",art);
    printf("%.2f",geo);
    return 0;
}
