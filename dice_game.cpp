// dice_game.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));

    cout << "Rolling dice..." << endl;
    int die1 = std::rand() % 6 + 1;
    int die2 = std::rand() % 6 + 1;

    cout << "Die 1: " << die1 << endl;
    cout << "Die 2: " << die2 << endl;
    cout << "Total value: " << die1 + die2 << endl;

    return 0;
}
