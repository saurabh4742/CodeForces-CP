#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n],y[n],z[n];
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i]>>z[i];
    }
    int netX=0,netY=0,netZ=0;
    for(int i=0;i<n;i++){
        netX+=x[i];
        netY+=y[i];
        netZ+=z[i];
    }
    if(!netX && !netY && !netZ)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}