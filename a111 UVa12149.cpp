#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        int answer=0;
        for(int i=1;i<=n;i++)
            answer += i*i;
        cout<<answer<<endl;
    }
}
