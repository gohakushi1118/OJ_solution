#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[100];
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        arr[i] = num;
    }

    int idx;
    cin >> idx;
    
    cout << arr[idx-1] << endl;
}