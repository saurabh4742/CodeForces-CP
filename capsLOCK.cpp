#include<iostream>
#include<string>
using namespace std;
int main()
{
    string que;
    cin>>que;
    string ans="";
    bool flag=false;
    int Tcaps=0;
    if(que[0]>=97 && que[0]<=122)
    flag=true;
    for(int i=0;i<que.length();i++){
        if(que[i]>=65 && que[i]<=90)
        Tcaps++;
    }
    if(( flag && Tcaps==que.length()-1) || (Tcaps==que.length())){
    if(flag && Tcaps==que.length()-1){
        ans=char(65+que[0]-97);
        for(int i=1;i<que.length();i++){
            int rem=que[i]-65+97;
            ans=ans+char(rem);
        }
        cout<<ans;
        return 0;
    }
    else if(Tcaps==que.length()){
        for(int i=0;i<que.length();i++){
            int rem=que[i]-65+97;
            ans=ans+char(rem);
        }
        cout<<ans;
        return 0;
    }
    }
    cout<<que;
    return 0;
}