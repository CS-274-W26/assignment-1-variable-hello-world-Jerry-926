#include <stdio.h> // Necessary for printf()

// TODO Other includes
#include <stdlib.h> // For rand() and srand()
#include <time.h> // For time()


int main() {
	// The main function is the entrypoint of the program. When the program
	// is executed, it will automatically start here.
	
	// TODO Complete the program

	int myrand; // Declare an integer variable to store the generated random number.

	srand(time(NULL)); // Use the current time as the random seed to ensure different results each time it is executed.
	myrand = rand() % 11; // Generate a random number between 0 and 10, including 10 and store it in myrand.

	// Based on the range of the random number, print the corresponding text.
	if (myrand <= 4){ // If the variable's value is less than or equal to 4.
		printf("Eat more beef, kick less cats\n"); // It will show: Eat more beef, kick less cats.
	} else if (myrand <= 9){ // Otherwise, check if the random number is ≤ 9. 
		printf("FRODO LIVES\n"); // It will show FRROD LIVES.
	} else { // When the value equal to 10
		printf("Larn is the best roguelike\n"); // It will show Larn is the best roguelike
	}
	printf("The random number was: %d\n", myrand); // It will show the random number was which one

	return 0;
}
