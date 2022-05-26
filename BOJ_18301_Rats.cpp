#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    int n1, n2, n12;
    cin >> n1 >> n2 >> n12;
    float result;
    result = ((n1 + 1) * (n2 + 1) / (n12 + 1)) - 1;
    result = floor(result + 0.5);
    cout << result << endl;
    
    return 0;
}
