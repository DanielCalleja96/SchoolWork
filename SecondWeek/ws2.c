#include <stdio.h>

struct Persons {
   int   person_id;
   char  name[50];
   char  surname[50];
   char  locality[50];
} Person;  

int main (void) {
	no_2();
}

void no_1() {
   int num1, num2;
	printf("Enter number 1: ");
	scanf("%d", &num1);
	printf("Enter number 2: ");
	scanf("%d", &num2);

	printf("The sum of %d and %d is %d.\n", num1, num2, (num1+num2));
	printf("The average of %d and %d is %d.\n", num1, num2, (num1+num2)/2);
	printf("The squared sum of %d and %d is %d.\n\n", num1, num2, (num1*num1)+(num2*num2));
}

void no_2() {
	struct Persons person1;
	person1.person_id = 1;
	
	printf("Name : ");
	scanf("%s", person1.name);
	
	printf("Surname : ");
	scanf("%s", person1.surname);

	printf("Locality : ");
	scanf("%s", person1.locality);

	printf("Name : %s %s, Locality: %s.\n\n", person1.name, person1.surname, person1.locality);
}