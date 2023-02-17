#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,score;
    while(cin>>n)
    {
        double sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>score;
            sum+=score;
        }
        sum/=n;
        if(sum>59)
            cout<<"no"<<endl;
        else cout<<"yes"<<endl;
    }
}
