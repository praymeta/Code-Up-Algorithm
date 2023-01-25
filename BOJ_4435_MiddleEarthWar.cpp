#include <iostream>
using namespace std;

int main(void) {
    int t, gandalf, sauron, gandalfScore = 0, sauronScore = 0, gandalfArmy[6] = {1, 2, 3, 3, 4, 10}, sauronArmy[7] = {1, 2, 2, 2, 3, 5, 10};
    cin >> t;
    for(int i = 0; i < t; i++) {
        for(int j = 0; j < 6; j++) {
            cin >> gandalf;
            gandalfScore += gandalfArmy[j] * gandalf;
        }
        for(int j = 0; j < 7; j++) {
            cin >> sauron;
            sauronScore += sauronArmy[j] * sauron;
        }
        cout << "Battle " << i + 1 << ": ";
        if(gandalfScore > sauronScore) cout << "Good triumphs over Evil\n";
        else if(sauronScore > gandalfScore) cout << "Evil eradicates all trace of Good\n";
        else cout << "No victor on this battle field\n";
        gandalfScore = sauronScore = 0;
    }
}
