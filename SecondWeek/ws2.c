#include <stdio.h>
#include <limits.h>
#include <time.h>

struct Persons {
   int   person_id;
   char  name[50];
   char  surname[50];
   char  locality[50];
} Person;  

int main (void) {
	no_9();
	
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
	int seconds, hours, minutes, number, days;
	printf("Enter number of seconds");
	scanf("%d", &seconds);
	days = seconds / (60 * 60 * 24);
	seconds -= days * (60 * 60 * 24);
	hours = seconds / (60 * 60);
	seconds -= hours * (60 * 60);
	minutes = seconds / 60;	
	printf("%d hours, %d minutes, %d days", hours, minutes, days);
}	


void no_7(int num1, int num2)
{
		printf("Enter  first number");
		scanf("%d", &num1);
		printf("Enter  second number");
		scanf("%d", &num2);
		
		if(num1> num2)
		{
			printf("%d", num1);
		} else if(num1<num2) {
			 printf("%d", num2);
		}else{
			printf("numbers are equal");
		}

}


void no_8(int num1, int num2){
	printf("%d\n\n", (num1>num2? num1 : num2));
}

void no_9()
{
    // This program will create different sequence of 
    // random numbers on every program run 
 
    // Use current time as seed for random generator
    srand(time(0));
 
    for(int i = 0; i<=5; i++)
        printf(" %d ", rand());
 
    return 0;
}