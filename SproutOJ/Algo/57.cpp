#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> heap;
    int num;
    cin >> num;

    for(int i=0; i<num; i++){
        int n;
        cin >> n;
        if (n == 1){
            int m;
            cin >> m;
            heap.push(m);
        }
        else{
            if (heap.size() == 0){
                cout << "empty!\n";
            }
            if (n == 2){
                heap.pop();
            }
        }
    }
}