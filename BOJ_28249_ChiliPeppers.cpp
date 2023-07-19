#include <iostream>
using namespace std;

int main(void) {
    int N, SHU = 0;
    string pepper;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> pepper;
        if(pepper == "Poblano") SHU += 1500;
        else if(pepper == "Mirasol") SHU += 6000;
        else if(pepper == "Serrano") SHU += 15500;
        else if(pepper == "Cayenne") SHU += 40000;
        else if(pepper == "Thai") SHU += 75000;
        else if(pepper == "Habanero") SHU += 125000;
    }
    cout << SHU;
}
