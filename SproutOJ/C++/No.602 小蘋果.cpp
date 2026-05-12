// Sprout OJ No.602 小蘋果
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    int arr[50];
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }

    int total_weight = 0;
    for (int i = 0; i < 50; i++){
        total_weight += arr[i];
    }

    int average_weight = 0;
    average_weight = total_weight / N;

    int result = 0;
    for (int i = 0; i < 50; i++){
        if (average_weight > arr[i]){
            result += arr[i];
        }
    }
    cout << result << endl;
    return 0;
}