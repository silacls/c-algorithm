#include<stdio.h>
#include<math.h>
//girilen sayi hangi sayinin karekökü bulan alg
int main()
{
	int sayi;
	float sonuc;
	printf("bir sayi giriniz=");
	scanf("%d",&sayi);
	if(sayi<0)
	{
		printf("hesaplanamiyor");
	}
	else{
	sonuc=sqrt(sayi);
	printf("%f",sonuc);}
	return 0;
}

