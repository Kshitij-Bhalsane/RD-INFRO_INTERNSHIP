#include <iostream>
#include <cstdlib>

using namespace std;

int main() 
{
    cout << "Welcome to the Guessing Game!\n";

    int minNum= 1, maxNum;
    std::cout<<"Enter the range till which guess can be made : " ; 
    std::cin>> maxNum;
    const int secretNumber = rand() % (maxNum - minNum + 1) + minNum; 

    int guess; 
    int attempts = 0;

    std::cout << "\n\nI have selected a number between " << minNum << " and " << maxNum << ". Guess which one it is.\n";

    do {
        std::cout << "\nEnter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the correct number (" << secretNumber << ") in " << attempts << " attempts."<<std::endl;
        }
    } while (guess != secretNumber);

    return 0;
}
