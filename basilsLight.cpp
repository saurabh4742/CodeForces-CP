#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector <int> ans(t,0);
    int bT=t;
    while (t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++)
        cin>>arr[i];
        int i=0,j=n-1;
        while (i<=j){
            ans[t]++;
            for (int k=0;k<=j;k++){
                if (arr[k]==0){
                    j--;
                    break;
                }
                if(k==j){
                    arr[k]--;
                }
                else{
                    if(arr[k]>arr[k+1])
                    arr[k]--;
                }
            }
        }
    }
    for (int i=bT-1;i>=0;i--)
    cout<<ans[i]-1<<endl;
    return 0;
}