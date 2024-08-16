#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define smallA 97
#define capA 65
int main()
{
    set<char> vow={'A','E','I','O','U','Y','a','e','i','o','u','y'};
    string que;
    cin>>que;
    string ans="";
    for(int i=0;i<que.length();i++){
        if(vow.count(que[i])){
            continue;
        }
        else{
            if(que[i]>=97)
            ans=ans+"."+que[i];
            else{
                int rem=que[i]-65;
               ans=ans+"."+char(smallA+rem);
            }
        }
    }
    cout<<ans;
    return 0;
}