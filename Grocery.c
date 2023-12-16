#include <stdio.h>
#define prcSP 3.5
#define prcKP 4.0
#define prcTJ 2.5
#define prcGK 2.0
#define prcTS 3.7

int main()
{
	int qtySP, qtyKP, qtyTJ, qtyGK, qtyTS;
	
	printf("qty Susu Pekat Manis Ceria: ");
	scanf("%d", &qtySP);
	printf("qty Kicap Pedas Mahsuri: ");
	scanf("%d", &qtyKP);
	printf("qty Tepung Jagung Nyonya: ");
	scanf("%d", &qtyTJ);
	printf("qty Gula Kasar: ");
	scanf("%d", &qtyGK);
	printf("qty Tigloo Sardine: ");
	scanf("%d", &qtyTS);
	
	printf ("\n**********************************************");
	printf("\n\tFRESH GROCERY");
	printf("\n\tKampung Baru");
	printf("\n\t\t\t\t Qty\t RM");
	printf("\n\t\t\t\t-----\t-----");
	printf("\n1  Susu Pekat Manis Ceria         %d\t%.2f", qtySP, prcSP*qtySP);
	printf("\n2  Kicap Pedas Mahsuri            %d\t%.2f", qtyKP, prcKP*qtyKP);
	printf("\n3  Tepung Jagung Nyonya           %d\t%.2f", qtyTJ, prcTJ*qtyTJ);
	printf("\n4  Gula Kasar                     %d\t%.2f", qtyGK, prcGK*qtyGK);
	printf("\n5  Tigloo Sardine                 %d\t%.2f", qtyTS, prcTS*qtyTS);
	
	printf("\n\t\t\t\t\t-----");
	printf("\n\t\t\t\tTotal   %.2f", prcSP*qtySP + prcKP*qtyKP + prcTJ*qtyTJ + prcGK*qtyGK + prcTS*qtyTS);
	printf("\n\t\t\t\t\t-----");
	
	return 0;
}