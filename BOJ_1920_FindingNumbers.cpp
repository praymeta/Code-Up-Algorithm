#include <iostream>
#include <algorithm>
using namespace std;

void binary_search(int arr[], int m, int N) {
    int left = 0, right = N - 1, mid;

    while(left <= right) {
        mid = (left + right) / 2;

        if(arr[mid] == m) {
            cout << 1 << '\n';
            return;
        } else if(arr[mid] < m)
            left = mid + 1;
        else
            right = mid - 1;
    }
    cout << 0 << '\n';
    return;
}

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, temp;
    cin >> N;
    
    int A[N];
    for(int i = 0; i < N; i++)
        cin >> A[i];
    sort(A, A + N);

    cin >> M;
    for(int i = 0; i < M; i++) {
        cin >> temp;
        binary_search(A, temp, N);
    }
}
