#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        int sum=a,counter=1;
        while(sum<=b)
        {
            a++;
            sum+=a;
            counter++;
        }
        cout<<counter<<endl;
    }
}
