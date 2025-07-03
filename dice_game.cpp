#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hello, " << name << "!" << endl;

    srand(time(nullptr));

    cout << "Rolling dice..." << endl;
    int die1 = rand() % 6 + 1;
    int die2 = rand() % 6 + 1;

    cout << "Die 1: " << die1 << endl;
    cout << "Die 2: " << die2 << endl;
    cout << "Total value: " << die1 + die2 << endl;

    return 0;
}
