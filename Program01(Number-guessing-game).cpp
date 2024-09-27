#include <iostream>  //Standard  stream library
#include <cstdlib>  // Use for rand() and srand() functions
#include <ctime>    // Use For time() to seed the random number generator

using namespace std;

int main() {
   
    srand(time(0));   // Initialize random seed based on the current time
    
   
    int randomNumber = rand() % 100 + 1;  // Generate a random number between 1 and 100
    int guess; //declare the varaible
    int numberOfTries = 0;  //declare the varaible and stored with 0

    cout << " \t\tWELCOME TO THE NUMBER GUESSING GAME!" << endl;
    cout <<endl<< "I have selected a random number between 1 and 100."<<endl<<"Try to guess it :)" << endl<<endl;

   
    do {  // Loop until the user guesses the correct number
        cout << "Enter your guess: ";
        cin >> guess; //taking value from the user
        numberOfTries++;
        
        //Condition to guee the number by the user
        if (guess > randomNumber) 
        {
            cout << "Too high! Try again." << endl;
        } 
        
        else if (guess < randomNumber) 
        {
            cout << "Too low! Try again." << endl;
        } 
        else 
        {
            cout << "Congratulations! You guessed the correct number in " << numberOfTries << " tries." << endl;
        }
    } while (guess != randomNumber);

    return 0; //Program executed successfully
}
