#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    cin>>n;
    cin>>p;
    if(n=n&(1<<(p-1)))
     cout<<"set bit";
    else
     cout<<"not set bit";
   

}
