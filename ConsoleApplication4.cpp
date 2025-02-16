#include <iostream>
using namespace std;

int main() {
    string response;
    int balance = 10;
    int cost = 5;

    cout << "Welcome to the fruit shop! Right now, I am selling bananas, apples, oranges, and strawberries.\n" << endl;
    cout << "Each bag of fruit costs $5, and you have $" << balance << ".\n" << endl;

    while (balance >= cost) { 
        cout << "What do you want to buy? (Type 'exit' to leave)\n" << endl;
        cin >> response;

        if (response == "exit") {
            cout << "Thank you for shopping! You have $" << balance << " left." << endl;
            break;  
        }

        if (response == "banana" || response == "bananas" ||
            response == "apple" || response == "apples" ||
            response == "orange" || response == "oranges" ||
            response == "strawberry" || response == "strawberries") {

            if (balance >= cost) {
                cout << "You bought a bag of " << response << " for $5." << endl;
                balance -= cost;
                cout << "You now have $" << balance << " left.\n" << endl;
            }
        }
        else {
            cout << "Sorry, we don't sell that fruit.\n" << endl;
        }
    }

    if (balance < cost) {
        cout << "You don't have enough money to buy more fruit. Thanks for visiting!" << endl;
    }

    return 0;
}
