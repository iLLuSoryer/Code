#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int flag=0;
        if(n==0)
            break;
        for(int i=1;i<n;i++)
        {
            if(i%7!=0 && flag==0)
            {
                cout<<i;
                flag=1;
            }
            else if(i%7!=0)
                cout<<" "<<i;
        }
        cout<<endl;
    }
}
