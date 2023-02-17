#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,counter=0,num,a=0,b=0,c=0;
    cin>>n;
    while(n--)
    {
        cin>>num;
        if(num%3==0)
            a++;
        else if(num%3==1)
            b++;
        else if(num%3==2)
            c++;
    }
    cout<<a<<" "<<b<<" "<<c;
}
