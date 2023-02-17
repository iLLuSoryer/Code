#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,counter=0;
    cin>>n;
    while(n--)
    {
        counter++;
        int sum=0;
        cin>>a>>b;
        for(int i=1;i<sqrt(b)+1;i++)
        {
            if(i*i<=b && i*i>=a)
                sum+=i*i;
        }
        cout<<"Case "<<counter<<": "<<sum<<endl;
    }
}
