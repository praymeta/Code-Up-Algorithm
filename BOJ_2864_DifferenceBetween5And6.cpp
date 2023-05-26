#include <iostream>
#include <string>
using namespace std;

string SixToFiveConvert(string a) {
    for(int i = 0; i < a.length(); i++) {
        if(a[i] == '6') a[i] = '5';
    }
    return a;
}

string FiveToSixConvert(string a) {
    for(int i = 0; i < a.length(); i++) {
        if(a[i] == '5') a[i] = '6';
    }
    return a;
}

int main(void) {
    string stringA, stringB;
    int a, b, original, five = 0, six = 0;
    cin >> a >> b;
    stringA = to_string(a);
    stringB = to_string(b);
    string allAFive, allASix, allBFive, allBSix;
    allAFive = SixToFiveConvert(stringA);
    allASix = FiveToSixConvert(stringA);
    allBFive = SixToFiveConvert(stringB);
    allBSix = FiveToSixConvert(stringB);
    cout << stoi(allAFive) + stoi(allBFive) << ' ' << stoi(allASix) + stoi(allBSix);
}
