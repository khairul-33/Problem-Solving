#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin >> n;
    while(n--){
        char A[8][8];
        for (int i = 0 ;i<8;++i){
            for(int j = 0; j < 8; j++){
                cin >> A[i][j];
                if(A[i][j] != '.'){
                    cout << A[i][j];
                }
            }
        }
        cout << endl;
    }
    return 0;
}