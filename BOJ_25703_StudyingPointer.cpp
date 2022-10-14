#include <iostream>
using namespace std;

int n;
int main(){
    cin >> n;
    cout << "int a;" << endl;
    for(int i = 1; i <= n; i++){
        cout << "int ";
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << "ptr";
        if(i != 1) cout << i;
        cout << " = ";
        if(i == 1) cout << "&a;" << endl;
        else {
            cout << "&ptr";
            if(i == 2) cout << ";" << endl;
            else cout << i-1 << ";" << endl;
        }
    }
}
