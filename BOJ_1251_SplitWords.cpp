#include <iostream>
#include <string>
using namespace std;

int main(void) {
  string input, ans = "{";
  cin >> input;
  for(int i = 0; i < input.length() - 2; i++) {
    for(int j = i + 1; j < input.length() - 1; j++) {
      string tmp = "";
      for(int k = i; k >= 0; k--)
        tmp += input[k];
      for(int k = j; k > i; k--)
        tmp += input[k];
      for(int k = input.length() - 1; k > j; k--)
        tmp += input[k];
      if(ans > tmp)
        ans = tmp;
    }
  }
  cout << ans;
}
