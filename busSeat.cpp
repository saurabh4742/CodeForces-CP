#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<bool> ans;
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        bool flag=true;
        set <int> seat;
        for (int j=0;j<n;j++){
            int no;
            cin>>no;
            if(j==0){
                seat.insert(no);
            }else{
                if(no==1)
                {
                    if(seat.count(2)){
                        seat.insert(no);
                    }else{
                        flag=false;
                    }
                }
                else if(no==n){
                         if(seat.count(no-1)){
                        seat.insert(no);
                    }else{
                        flag=false;
                    }
                }
                else{
                    if(seat.count(no-1) || seat.count(no+1)){
                        seat.insert(no);
                    }
                    else{
                        flag=false;
                    }
                }
            }
        }
        ans.push_back(flag);
    }
    for(int i=0;i<ans.size();i++){
        if(ans[i]){
                cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}