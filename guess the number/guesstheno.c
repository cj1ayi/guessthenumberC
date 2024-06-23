#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void customRangeMode();
void randomRangeMode();
void hardMode();
void howToPlay();

int main()
{   
    int userChoice;

    printf("Welcome to the Number Guessing Game!\n");
    printf("[1] Custom Range Mode\n");
    printf("[2] Random Range Mode\n");
    printf("[3] HARD MODE\n");
    printf("[4] How to play\n");

    printf("Choose a mode: ");
    scanf("%d", &userChoice);

    srand(time(0)); // Seed the random number generator

    switch (userChoice)
    {
        case 1:
            customRangeMode();
            break;
        case 2:
            randomRangeMode();
            break;
        case 3:
            hardMode();
            break;
        case 4:
            howToPlay();
            break;
        default:
            printf("Invalid choice. Please select a valid option.\n");
            break;
    }

    return 0;
}

void customRangeMode()
{
    int lowerBound, upperBound;
    int maxAttempts = 10; // Max attempts for Custom Range Mode
    int attempts = 0;
    int guess;

    // Input the lower bound
    printf("Enter the lower bound: ");
    scanf("%d", &lowerBound);

    // Input the upper bound
    printf("Enter the upper bound: ");
    scanf("%d", &upperBound);

    if (lowerBound > upperBound) {
        printf("Invalid range. Lower bound must be less than or equal to upper bound.\n");
        return;
    }

    int value = rand() % (upperBound - lowerBound + 1) + lowerBound;
    printf("I have selected a number between %d and %d. Can you guess it?\n", lowerBound, upperBound);

    while (attempts < maxAttempts)
    {
        printf("Enter your guess (%d to %d): ", lowerBound, upperBound);
        scanf("%d", &guess);

        if (guess == value) {
            printf("Congratulations! You guessed the number.\n");
            break;
        } else if (guess < value) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }

        attempts++;
        printf("Attempts left: %d\n", maxAttempts - attempts);
    }

    if (attempts == maxAttempts) {
        printf("Sorry, you've used all your attempts. The number was %d.\n", value);
    }
}

void randomRangeMode()
{
    int maxAttempts = 15; // Max attempts for Random Range Mode
    int attempts = 0;
    int guess;

    int randomBound = rand() % 100 + 1;
    int value = rand() % randomBound + 1;

    printf("I have selected a number between 1 and %d. Can you guess it?\n", randomBound);

    while (attempts < maxAttempts)
    {
        printf("Enter your guess (1 to %d): ", randomBound);
        scanf("%d", &guess);

        if (guess == value) {
            printf("Congratulations! You guessed the number.\n");
            break; 
        } else if (guess < value) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }

        attempts++;
        printf("Attempts left: %d\n", maxAttempts - attempts);
    }

    if (attempts == maxAttempts) {
        printf("Sorry, you've used all your attempts. The number was %d.\n", value);
    }
}

void hardMode()
{
    int maxAttempts = 20; // Max attempts for HARD MODE
    int attempts = 0;
    int guess;

    int value = rand() % 500 + 1;
    printf("I have selected a number between 1 and 500. Can you guess it?\n");

    while (attempts < maxAttempts)
    {
        printf("Enter your guess (1 to 500): ");
        scanf("%d", &guess);

        if (guess == value) {
            printf("Congratulations! You guessed the number.\n");
            break; 
        } else if (guess < value) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }

        attempts++;
        printf("Attempts left: %d\n", maxAttempts - attempts);
    }

    if (attempts == maxAttempts) {
        printf("Sorry, you've used all your attempts. The number was %d.\n", value);
    }
}

void howToPlay()
{
    printf("The program will randomly select a number within a certain range.\n");
    printf("You must make a guess within a certain amount of attempts.\n");
    printf("The program will provide you feedback on whether the guess is too high, too low, or correct.\n");
    printf("[1] Custom Range Mode: 10 attempts\n");
    printf("[2] Random Range Mode: 15 attempts\n");
    printf("[3] HARD MODE: 20 attempts\n");
}
