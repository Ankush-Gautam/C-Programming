//27. Simulation of game of chances
#include<stdio.h>
#include<time.h>
int main()
{
	int guess,number;
	time_t t;
	srand(time(&t));	// to change the value everytime we excute the program
	
	printf("Welcome to Game of Chance\nGuess a number between 1 to 6.\n\n");
	printf("Enter your guess: ");
	scanf("%d",&guess);
	
	number = rand()% 6 + 1;
	
	if(number == guess)
		printf("You are Correct! YOU WIN");
	else
		printf("Sorry! The number was %d",number);
	
	return 0;
}
