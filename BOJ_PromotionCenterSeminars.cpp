#include <iostream>
using namespace std;

int main(void) {
    int N;
    string lecture;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> lecture;
        if(lecture == "Algorithm")
            cout << "204\n";
        else if(lecture == "DataAnalysis")
            cout << "207\n";
        else if(lecture == "ArtificialIntelligence")
            cout << "302\n";
        else if(lecture == "CyberSecurity")
            cout << "B101\n";
        else if(lecture == "Network")
            cout << "303\n";
        else if(lecture == "Startup")
            cout << "501\n";
        else
            cout << "105\n";
    }
}
