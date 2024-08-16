#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector <bool> ans;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
       int a[n];
        for(int k=0;k<n;k++)
        cin>>a[k];
        int m;
        cin>>m;
        for(int j=0;j<m;j++){
            string que;
            cin>>que;
            bool flag=true;
            if(que.length()==n){
                    map<char,int> mark;
                    for (int p=0;p<n;p++){
                        if(mark[que[p]]){
                            if(mark[que[p]]==a[p]){
                                    continue;
                            }else{
                                flag=false;
                            }
                        }
                        else{
                            mark[que[p]]=a[p];
                        }
                    }
                    ans.push_back(flag);
            }
            else{
                flag=false;
                ans.push_back(flag);
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        if(ans[i]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}