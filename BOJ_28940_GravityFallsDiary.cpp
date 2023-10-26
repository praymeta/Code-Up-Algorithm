#include <iostream>
using namespace std;

int main(void) {
    int w, h, n, a, b, numletterW, numletterH, answer;
    cin >> w >> h >> n >> a >> b;
    numletterW = w / a;
    numletterH = h / b;
    if(numletterW < 1 || numletterH < 1) {
        cout << -1;
        return 0;
    }
    answer = n / (numletterW * numletterH);
    if(n % (numletterW * numletterH) != 0)
        answer++;
    cout << answer;
}
