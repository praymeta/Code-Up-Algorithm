#include <iostream>
using namespace std;

int main(void) {
  int a, b, array[1000], num = 1, p = 0, sum = 0;
  cin >> a >> b;
  for(int i = 0; p < 1000; i++) {
    for(int j = 0; j <= i; j++) {
      array[p++] = num;
      if(p == 1000) break;
    }
    num++;
  }
  for(int i = a - 1; i <= b - 1; i++) {
    sum += array[i];
  }
  cout << sum;
}
