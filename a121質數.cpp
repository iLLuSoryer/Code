#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a>b)
        {
            cout<<"0"<<endl;
            continue;
        }
        int counter=0;
        for(int i=a;i<=b;i++)
        {
            int flag=1;
            if(i<2)
                continue;
            for(int j=2;j<=sqrt(i);j++)
            {
                if(i%j==0 && i!=j)
                {
                    flag=0;
                    break;
                }
            }
            if(flag)
                counter++;
        }
        cout<<counter<<endl;
    }
}
