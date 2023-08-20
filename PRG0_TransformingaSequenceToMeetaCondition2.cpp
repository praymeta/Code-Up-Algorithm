#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    vector<int> preArr;
    int answer = 0, cnt = 0;
    while(true) {
        preArr = arr;
        for(int i = 0; i < arr.size(); i++) {
            if((arr[i] >= 50) && !(arr[i] % 2))
                arr[i] /= 2;
            else if((arr[i] < 50) && (arr[i] % 2))
                arr[i] = arr[i] * 2 + 1;
        }
        if(preArr == arr)
            return answer = cnt;
        else
            cnt++;
    }
}
