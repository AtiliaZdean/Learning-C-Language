#include <stdio.h>
int main()

{
	
	char myname[10];
	int age;
	char gender[10];
	float height, weight;
	
	//get input
	printf(" Name: ");
	scanf("%s", myname);
	printf("\n Age: ");
	scanf("%d", &age);
	printf("\n Gender: ");
	scanf("%s", &gender);
	printf("\n Height: ");
	scanf("%f", &height);
	printf("\n Weight: ");
	scanf("%f", &weight);
	
	//display topic
	printf("\n    My Biodata");
	printf("\n*******************");
	
	//display data
	printf("\nName: %s", myname);
	printf("\nAge: %d years old", age);
	printf("\nGender: %s", gender);
	printf("\nHeight: %.2fm", height);
	printf("\nWeight: %.2fkg", weight);
	printf("\nBMI: %.2f", weight/(height*height));
	
}
