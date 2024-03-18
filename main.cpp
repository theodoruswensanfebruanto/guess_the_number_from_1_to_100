#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  srand(time(nullptr));

  while (true) {
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif

    cout << "GUESS THE NUMBER FROM 1 TO 100";
    cout << "\n";
    cout << "\n";

    cout << "Guess the number from 1 to 100!";
    cout << "\n";

    int minimum_number = 1;
    int maximum_number = 100;
    int guess_number = 0;

    int randomized_number = rand() % maximum_number + 1;

    int your_guess = 0;
    while (your_guess != randomized_number) {
      while (your_guess < minimum_number || your_guess > maximum_number) {
        cout << "Your guess: ";
        cin >> your_guess;
      }

      guess_number++;

      if (your_guess < randomized_number) {
        cout << "My response: Go higher";
      } else if (your_guess > randomized_number) {
        cout << "My response: Go lower";
      } else {
        cout << "My response: You are correct! The number is " << your_guess << ". It takes " << guess_number << " guess(es) for you to answer correctly.";
        cout << "\n";
        cout << "\n";
        break;
      }

      cout << "\n";

      your_guess = 0;
    }

    cout << "Do you want to restart?";
    cout << "\n";
    cout << "1) Yes";
    cout << "\n";
    cout << "2) No";
    cout << "\n";

    int quit_or_no = 0;
    while (quit_or_no != 1 && quit_or_no != 2) {
      cout << "Choose between 1 and 2: ";
      cin >> quit_or_no;
    }

    if (quit_or_no == 2) {
      break;
    }
  }

  return 0;
}