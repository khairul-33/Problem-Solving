#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n + 1];
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < n; i++){
            cin >> A[i];
            if(A[i] % 2 == 0) sum1 += A[i];
            else sum2 += A[i];
        }
        if(sum1 > sum2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;

}