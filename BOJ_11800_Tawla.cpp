#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    string diceString[7] = {"", "Yakk", "Doh", "Seh", "Ghar", "Bang", "Sheesh"};
    string sameDiceString[7] = {"", "Habb Yakk", "Dobara", "Dousa", "Dorgy", "Dabash", "Dosh"};
    int T, ab[2];
    cin >> T;
    for(int i = 1; i <= T; i++) {
        cin >> ab[0] >> ab[1];
        sort(ab, ab + 2);
        cout << "Case " << i << ": ";
        if(ab[0] == ab[1])
            cout << sameDiceString[ab[0]] << '\n';
        else if(ab[0] + ab[1] == 11)
            cout << "Sheesh Beesh\n";
        else
            cout << diceString[ab[1]] << ' ' << diceString[ab[0]] << '\n';
    }
}
