#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,count=0;
    cin>>a>>b;
    if(a<=b)
    {
        for(int i=1;i!=0;i++){
            a*=3;
            b*=2;
            count++;
            if(a>b) break;
        }
    }
    cout<<count<<endl;
}