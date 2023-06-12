#include <string>
#include <vector>

using namespace std;

int GCD(int a, int b) {
    return b ? GCD(b, a % b) : a;
}

bool IsPrime(int a) {
    for(int i = 2; i < a; i++) {
        if(a % i == 0) 
            return false;
    }
    return true;
}

int solution(int a, int b) {
    int gcd = GCD(a, b);
    b /= gcd;
    for(int i = 3; i <= b; i++) {
        if(i == 5) continue;
        if((b % i == 0) && (IsPrime(i))) {
            return 2;
        }
    }
    return 1;
}
