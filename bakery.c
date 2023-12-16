#include <stdio.h>
#define prcP 30.00
#define prcA 28.00
#define prcF 20.00

int main()
{
	printf ("Item\t\tDescription\tPrice (RM)");
	printf ("\n----\t\t-----------\t----------");
	printf ("\nPineapple Tart\t50 pcs\t\t30.00");
	printf ("\nAlmond Cookies\t50 pcs\t\t28.00");
	printf ("\nFruit Cake\t500 g\t\t20.00");
	
	int no, qtyP, qtyA, qtyF;
	
	printf ("\n\nEnter order no: ");
	scanf ("%d", &no);
	printf ("Enter quantity for Pineapple Tart: ");
	scanf ("%d", &qtyP);
	printf ("Enter quantity for Almond Cookies: ");
	scanf ("%d", &qtyA);
	printf ("Enter quantity for Fruit Cake: ");
	scanf ("%d", &qtyF);
	
	printf ("\n\n\t\t**INVOICE**");
	printf ("\nOrder no: %d", no);
	printf ("\nItem\t\tDescription\tPrice (RM)");
	printf ("\n----\t\t-----------\t----------");
	printf ("\nPineapple Tart\t%d\t\t%.2f", qtyP, prcP*qtyP);
	printf ("\nAlmond Cookies\t%d\t\t%.2f", qtyA, prcA*qtyA);
	printf ("\nFruit Cake\t%d\t\t%.2f", qtyF, prcF*qtyF);
	printf ("\n\nTOTAL PRICE (RM): %.2f", prcP*qtyP + prcA*qtyA + prcF*qtyF);
	
	return 0;
}