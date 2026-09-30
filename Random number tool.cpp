#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generateRandomNumber();
void guessGame();
void compareTworandom();
void averageRandom();
//Function declarations for the random number tool
int main() {
        cout << "********************************\n";
        cout << " 1: Generate a random number\n";
        cout << " 2: Guessing Game (1-10,000)\n";
        cout << " 3: Compare two random numbers\n";
        cout << " 4: Random Number average\n";
        cout << " 5: Exit Program\n";
        cout << "    Enter your choice (1-5): ";

        int choice;
        cin >> choice;
    //Validates user choice
        if (choice >=1 && choice <= 5) {
            //Valid choices allowed only
            cout << "You selected option " << choice << ".\n";
        } else {
            cout << "That is not a valid option! Please enter option 1 -5!\n";
            return main();
        }
        
//Switch to determine the action based on user choice
    switch(choice) { 
        case 1:
            generateRandomNumber();
            break;
        case 2:
            guessGame();
            break;
        case 3:
            compareTworandom();
            break;
        case 4:
            averageRandom();
            break;
        case 5:
            cout << "Exiting Program.\n";
            exit(0);
            break;
    }

    return 0;
}
//Function to generate a random number
void generateRandomNumber() {
    cout << "Running: Generate a random number\n";
    srand(time(0)); // Seed the random number generator
    int randomNumber = rand(); // Generate a random number
    cout << "Generated random number: " << randomNumber << "\n";
    
}
//Guessing Game function
void guessGame() {
    cout << "Running: Guessing Game\n";
    srand(time(0)); // Seed the random number generator
int arandomNumber = rand() % 10000 + 1; // Generate a random number between 1 and 10,000

    int guess = 0;
    int attempts = 0;

    cout << "Welcome to the Guessing Game!\n";
    cout << "I have selected a random number between 1 and 10,000.\n";
    cout << "Can you guess the number (1-10,000)?: ";
    //Loop until the user guesses the correct number
    while (guess != arandomNumber) {
        cout << "Guess the Number: ";
        cin >> guess;
        attempts++;

        if (guess < arandomNumber) {
            cout << "Too low!\n";
        } else if (guess > arandomNumber) {
            cout << "Too high!\n";
        } else {
            cout << "Congratulations! You guessed the correct number in "
                 << attempts << " attempts.\n";
        }
    }

    
}
//Compare two random numbers to see which one is greater
void compareTworandom() {
    cout << "Running: Compare two random numbers\n";
    srand(time(0)); // Seed the random number generator

    int randomNumber1 = rand();
    int randomNumber2 = rand();

    cout << "First random number: " << randomNumber1 << "\n";
    cout << "Second random number: " << randomNumber2 << "\n";
    //Compare the two random numbers
    if (randomNumber1 > randomNumber2) {
        cout << "The first random number is greater.\n";
    } else if (randomNumber1 < randomNumber2) {
        cout << "The second random number is greater.\n";
    } else {
        cout << "Both random numbers are equal.\n";
    }
}
//Take the average of two random numbers
void averageRandom() {
    cout << "Running: Random Number average\n";
    srand(time(0)); // Seed the random number generator

    int randomNumber1 = rand();
    int randomNumber2 = rand();

    cout << "First random number: " << randomNumber1 << "\n";
    cout << "Second random number: " << randomNumber2 << "\n";
    //Calculate the average of the two random numbers
    double average = (randomNumber1 + randomNumber2) / 2.0;
        cout << "Average of the two random numbers: " << average << "\n";
}
