#include<stdio.h>
int main()
{
	// Declaration of variables (Hours and Minutes) of type integer
	int Hours, Minutes;
	
	// Declaration of variable (Seconds) of type long integer
	long int Seconds;
	
	// print a message on the screen to able the user to understand what should be input
	printf("Please, Enter the number of seconds: \n");
	
	//take value (Seconds) from the user
	scanf("%ld", &Seconds);
	
	//calculate (Hours)
	Hours = Seconds / (3600);
	
	//calculate (Minutes)
	Minutes = (Seconds - (3600*Hours)) / 60 ;
	
	//calculate (Seconds)
	Seconds = (Seconds -(3600*Hours)-(Minutes*60));
	
	//print on the screen the output(Hours, Minutes, Seconds)
	printf("Hours: %d\n", Hours);
	printf("Minutes: %d\n", Minutes);
	printf("Seconds: %ld", Seconds);
	
	return 0;	
}



