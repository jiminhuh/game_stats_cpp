#include <iostream>

using namespace std;

int main() {
    int score;
    double distance;
    char playAgain;
    bool shieldsUp;

    short lives, aliensKilled;

    score = 0;
    distance = 1200.76;
    playAgain = 'Y';
    lives = 3;
    aliensKilled = 10;
    double engineTemp = 6572.89;

    cout << "\nscore: "     << score << endl;
    cout << "distance: "     << distance << endl;
    cout << "playAgain: "    << playAgain << endl;
    cout << "lives: "     << lives << endl;
    cout << "aliensKilled: " << aliensKilled << endl;
    cout << "engineTemp: " << engineTemp << endl;

    int fuel;

    cout << "How much fuel? ";
    cin >> fuel;
    cout << "Fuel: " << fuel << endl;

    typedef unsigned short int ushort;
    ushort bonus = 10;
    cout << "Bonus: " << bonus << endl;

    return 0;

}
