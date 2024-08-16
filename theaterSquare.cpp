#include<iostream>
#include<string>
using namespace std;
int main()
{
    long long n,m,a;
    cin>>n>>m>>a;
    long long oneSideArea=n*a;
    long long otherSideArea=m*a;
    long long sq1;
    long long sq2;
    if(oneSideArea % (a*a)){
        sq1=oneSideArea / (a*a);
        sq1+=1;
    }
    else{
         sq1=oneSideArea / (a*a);
    }
    if(otherSideArea % (a*a)){
        sq2=otherSideArea / (a*a);
        sq2+=1;
    }
    else{
         sq2=otherSideArea / (a*a);
    }
     cout<<sq1*sq2;
    return 0;
}   