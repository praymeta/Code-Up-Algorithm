#include <iostream>
using namespace std;

int main(void) {
    int N, answer = 0;
    cin >> N;
    int arr[N];
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    answer += arr[0];
    for(int i = 1; i < N; i++) {
        if(arr[i - 1] != arr[i] - 1)
            answer += arr[i];
    }
    cout << answer;
}
