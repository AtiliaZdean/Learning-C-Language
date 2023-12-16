#include<stdio.h>

int main()
{
	char status;
	int year;
	float salary;
	float newSalary;

	printf ("Enter employee status [F=full time]/[P=part time]: ");
	scanf ("%c", &status);
	printf ("Enter employee salary: ");
	scanf ("%f", &salary);
	printf ("Years of service: ");
	scanf ("%d", &year);
	
	if (status=='F'||status=='f')
	{
		if (year<5)
		   newSalary = salary + (salary*0.04);
		else
		   newSalary = salary + (salary*0.05);
	}
	
	else if (status=='P'||status=='p')
	{
		if (year<5)
		   newSalary = salary + (salary*0.025);
		else
		   newSalary = salary + (salary*0.03);
	}
	
	//display
	printf ("\n----------------------------------------------------");
	printf ("\nEmployee Year of Service: %d years", year);
	printf ("\nEmployee Status: %c", status);
	printf ("\nNew salary: RM%.2f", newSalary);
}