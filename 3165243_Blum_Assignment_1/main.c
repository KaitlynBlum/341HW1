//Program: EECS 348 Assignment 1
// Description: user has three tries to guess a number
// Collaborators: source code fron Claude
// Author: Kaitlyn Blum
// Created: 9/8/26
// Revition date: 9/8/26
// Revition: code corrections

#include <stdio.h>

int main(void) {
    int secret = 7; // number we are trying to guess
    int guess; // stores user's guess

    printf("Guess a number between 1 and 10.\n");

    for (int attempt = 0; attempt <= 3; attempt++) { // for loop to ask for 3 attempts
        printf("Attempt %d/3. Enter your guess: ", attempt+1);// prints attemp number and asks for guess
            scanf("%d", &guess); // gets user input. I couldn't find how to do try-except in c, but I would've put one here to catch string errors

        

        if (guess == secret) { // check if you guessed the correct answer
            printf("Correct! You win!\n"); // prints that you win
            return 0; // game ends if you get the answer correct
        } else if (guess < secret) { //checks if guess is too low
            printf("Too low! Try again.\n"); //prints too low
        } else {
            printf("Too high! Try again.\n"); // prints too high
        }
    }

    //This only runs if you lose
    printf("Out of tries! The number was %d. You lose.\n", secret);
    return 0;
}
