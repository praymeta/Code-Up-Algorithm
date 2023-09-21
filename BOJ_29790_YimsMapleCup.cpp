#include <iostream>
using namespace std;

int main(void) {
    int N, U, L;
    bool boj = false, maple = false;
    cin >> N >> U >> L;
    if(N >= 1000)
        boj = true;
    if(U >= 8000 || L >= 260)
        maple = true;
    if(boj == true && maple == true)
        cout << "Very Good";
    else if(boj == true)
        cout << "Good";
    else
        cout << "Bad";
}
