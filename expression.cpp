#include<iostream>
#include<string>
using namespace std;
int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    long long sol1=(a*b)+c;
    long long sol2=(a+b)*c;
    long long sol3=a*b*c;
    long long sol4=a+b+c;
    long long sol5=a+(b*c);
    long long sol6=a*(b+c);
    long long ans=INT_MIN;
    if(sol1>ans)
    ans=sol1;
    if(sol2>ans)
    ans=sol2;
    if(sol3>ans)
    ans=sol3;
    if(sol4>ans)
    ans=sol4;
    if(sol5>ans)
    ans=sol5;
    if(sol6>ans)
    ans=sol6;
    cout<<ans;
    return 0;
}