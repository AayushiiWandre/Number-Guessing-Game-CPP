#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int n = 0;

    srand(time(0));
    int num = rand() % 100 + 1;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "Guess a number (1-100, or 0 to exit):\n";

    do {
        cout << "Guess a number: ";
        cin >> n;

        if (n == 0) {
            cout << "Thanks for playing!\n";
            break;
        }
        else if (n < 1 || n > 100) {
            cout << "Please enter a number between 1 and 100.\n";
        }
        else if (n == num) {
            cout << "Congratulations! You guessed correctly!\n";
            break;
        }
        else if (n < num) {
            cout << "Too Low!\n";
        }
        else {
            cout << "Too High!\n";
        }

    } while (n != 0);

    return 0;
}



