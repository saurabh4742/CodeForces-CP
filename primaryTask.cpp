#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    long long n[t];
    for (int i=0; i < t; i++)
    {
        cin >> n[i];
    }
    for (int i = 0; i < t; i++)
    {
       if((n[i]>=10100 && n[i]<=10999) || (n[i]>=1010 && n[i]<=1099) || (n[i]>=102 && n[i]<=109)){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
    return 0;
}