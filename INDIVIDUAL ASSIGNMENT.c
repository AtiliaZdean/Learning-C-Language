#include<stdio.h>
#define feeA 2.5
#define feeB 2.0
#define feeC 1.5
#define feeD 2.0
#define feeE 2.0

int main ()
{
	char name [15], code, yn;
	int phone, qtyA, qtyB, qtyC, qtyD, qtyE;
	int qtyA1=0, qtyB1=0, qtyC1=0, qtyD1=0, qtyE1=0;
	float total, totalA, totalB, totalC, totalD, totalE, disc, total1;
	
	printf ("\n\t\t\t\t  UITM TRAM SERVICES");
	printf ("\n       ----------------------------------------------------------------------");
	printf ("\n\tDESTINATION CODE\tDESTINATION\t  DEPARTURE\tTICKET PRICE");
	printf ("\n       ----------------------------------------------------------------------");
	printf ("\n\t      A\t\t   Kolej Tualang\t  Main gate\t   RM2.50");
	printf ("\n\t      B\t\t   Bangunan Pentadbiran\t  Main gate\t   RM2.00");
	printf ("\n\t      C\t\t   Kolej Dahlia\t\t  Main gate\t   RM1.50");
	printf ("\n\t      D\t\t   Pusat Islam\t\t  Main gate\t   RM2.00");
	printf ("\n\t      E\t\t   Unit Kesihatan\t  Main gate\t   RM2.00");
	printf ("\n       ----------------------------------------------------------------------");
	printf ("\n     *UiTM Tram will give a 10 percent discount for users with a total price of \n       more than RM10.00.");
	printf ("\n\n   ******************************************************************************");
	printf ("\n\t\t\t  UITM TRAM BOOKING SYSTEM APPLICATION");
	
	printf ("\n\n\tName: ");
	scanf ("%s", &name);
	printf ("\tPhone number: ");
	scanf ("%d", &phone);
	printf ("\n\tEnter your destination code and the quantity.\n");
	
	do
	{
		do
	    {
	    	printf ("\n\tDestination Code: ");
	        scanf (" %c", &code);
	        
	    	if (code=='A' || code=='a')
	    	{
	    	    printf ("\tQuantity: ");
	    	    scanf ("%d", &qtyA);
	    	    qtyA1 += qtyA;
	    	    totalA = feeA*qtyA1;
	    	}
	    	else if (code=='B' || code=='b')
	    	{
	    		printf ("\tQuantity: ");
	    	    scanf ("%d", &qtyB);
	    	    qtyB1 += qtyB;
	    	    totalB = feeB*qtyB1;
	        }
	        else if (code=='C' || code=='c')
	    	{
	    		printf ("\tQuantity: ");
	    	    scanf ("%d", &qtyC);
	    	    qtyC1 += qtyC;
	    	    totalC = feeC*qtyC1;
	        }
	        else if (code=='D' || code=='d')
	    	{
	    		printf ("\tQuantity: ");
	    	    scanf ("%d", &qtyD);
	    	    qtyD1 += qtyD;
	    	    totalD = feeD*qtyD1;
	        }
	        else if (code=='E' || code=='e')
	    	{
	    		printf ("\tQuantity: ");
	    	    scanf ("%d", &qtyE);
	    	    qtyE1 += qtyE;
	    	    totalE = feeE*qtyE1;
	        }
	        else
	        {
	        	printf ("\t!!!INVALID PACKAGE CODE!!!\n");
			}
		}
		while (code!='A' && code!='a' && code!='B' && code!='b' && code!='C' && code!='c' && code!='D' && code!='d' && code!='E' && code!='e');
		
		printf ("\tDo you want to make another order ? [Y/N]: ");
		scanf (" %c", &yn);
	}
	while (yn=='Y' || yn=='y');
	
	total = totalA + totalB + totalC + totalD + totalE;
	
	if (total>10)
	{
		disc = total*0.1;
		total1 = total - disc;
	}
	else
	{
		total1 = total;
	}
	
	printf ("\n\n   ******************************************************************************");
	printf ("\n\t\t\t\t  BOOKING DETAILS\n");
	printf ("\n\tName: %s", name);
	printf ("\n\tPhone Number: 0%d", phone);
	printf ("\n\tDeparture: Main Gate");
	printf ("\n\n\tDESTINATION CODE\tDESTINATION\t  QUANTITY\t PRICE");
	printf ("\n       -----------------------------------------------------------------");
	printf ("\n\t      A\t\t   Kolej Tualang\t     %d\t\tRM%.2f", qtyA1, totalA);
	printf ("\n\t      B\t\t   Bangunan Pentadbiran\t     %d\t\tRM%.2f", qtyB1, totalB);
	printf ("\n\t      C\t\t   Kolej Dahlia\t\t     %d\t\tRM%.2f", qtyC1, totalC);
	printf ("\n\t      D\t\t   Pusat Islam\t\t     %d\t\tRM%.2f", qtyD1, totalD);
	printf ("\n\t      E\t\t   Unit Kesihatan\t     %d\t\tRM%.2f", qtyE1, totalE);
	printf ("\n\t\t\t\t\t\t\t\t-------");
	printf ("\n\t\t\t\t\t\tTotal\t\tRM%.2f", total);
	printf ("\n\t\t\t\t\t\tDiscount\tRM%.2f", disc);
	printf ("\n\t\t\t\t\t\t\t\t-------");
	printf ("\n\t\t\t\t\t\tFinal Total\tRM%.2f", total1);
	printf ("\n       -----------------------------------------------------------------");
	printf ("\n\t  Thank you for using our service.\n");
	
	return 0;
}