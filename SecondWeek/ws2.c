#include <stdio.h>
#include <limits.h>

struct Persons {
   int   person_id;
   char  name[50];
   char  surname[50];
   char  locality[50];
} Person;  

int main (void) {
	no_6();
	
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

void no_3()
{
	int numbers = 3;
	int numberinput[numbers];
	int largestnumber = 0;

	for(int i = 0; i<=numbers-1; i++)
	{
		printf("enter a number %d: ", i+1);
		scanf("%d", &numberinput[i]);
		if(numberinput[i] > largestnumber)
			largestnumber = numberinput[i];
	}

	printf("The largest number inputted is : %d\n", largestnumber);	

}

void no_4()
{
	for(unsigned int i = 0; i <= INT_MAX; i+=10000)
	{
		printf("%d\n", i);
	}	
}

void no_5()
{
	printf("Enter a number between 1 and 100\n");
	int number;
	if(scanf("%d", &number) == 0)
	{
		printf("This was not an integer\n");
	}
	else if(number > 100 || number < 1)
	{
		printf("number was not within range\n");
	}else{
		printf("number was in range\n");
	}
}

void no_6()
{
	int sec, hours, minutes, number;
	printf("Enter number of seconds");
	scanf("%d", &number);
}

