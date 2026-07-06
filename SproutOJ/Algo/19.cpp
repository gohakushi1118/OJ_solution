#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i=1; i<n+1; i++){
        cout << "Line #" << i << "\n";

        int m;
        cin >> m;

        for(int j=0; j<m; j++){
            int num;
            cin >> num;
            
            vector<vector<int>> china;

            for(int k=0; k<num; k++){
                int p;
                cin >> p;
                china.push_back(p);
            }

            int cmd;
            cin >> cmd;

            for(int l=0; l<cmd; l++){
                string q;
                cin >> q;

                if(q == "ENQUEUE"){
                    int member;
                    cin >> member;
                    china.push_back(member);
                }
                else{
                    china.pop();
                }
            }
        }
    }
}