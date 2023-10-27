#include <iostream>
#include <stack>
using namespace std;

int main(void) {
    stack<int> accountBook;
    int K, num, book_size, sum = 0;
    cin >> K;
    for(int i = 0; i < K; i++) {
        cin >> num;
        if(num == 0)
            accountBook.pop();
        else
            accountBook.push(num);
    }
    book_size = accountBook.size();
    for(int i = 0; i < book_size; i++) {
        sum += accountBook.top();
        accountBook.pop();
    }
    cout << sum;
}
