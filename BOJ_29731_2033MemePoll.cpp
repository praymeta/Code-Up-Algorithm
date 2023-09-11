#include <iostream>
using namespace std;

int main(void) {
    int N, chk = 0;
    string commit;
    cin >> N;
    cin.ignore();
    for(int i = 0; i < N; i++) {
        getline(cin, commit);
        if(commit == "Never gonna give you up")
            continue;
        else if(commit == "Never gonna let you down")
            continue;
        else if(commit == "Never gonna run around and desert you")
            continue;
        else if(commit == "Never gonna make you cry")
            continue;
        else if(commit == "Never gonna say goodbye")
            continue;
        else if(commit == "Never gonna tell a lie and hurt you")
            continue;
        else if(commit == "Never gonna stop")
            continue;
        else
            chk++;
    }
    if(chk)
        cout << "Yes";
    else
        cout << "No";
}
