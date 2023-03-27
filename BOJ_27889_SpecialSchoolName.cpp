#include <iostream>
using namespace std;

int main(void) {
    string name;
    cin >> name;
    if(name == "NLCS") cout << "North London Collegiate School";
    else if(name == "BHA") cout << "Branksome Hall Asia";
    else if(name == "KIS") cout << "Korea International School";
    else cout << "St. Johnsbury Academy";
}
