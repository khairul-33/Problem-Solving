#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int A[4];
        for(int i = 0; i < 3; i++){
            cin >> A[i];
        }
        sort(A, A + 3);
        cout << A[1] << endl;
    }
    return 0;
}