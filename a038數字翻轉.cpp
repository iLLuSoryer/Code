#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        string y;
        for(int i=s.length()-1;i>=0;i--)
        {
            y+=s[i];
        }
        while(y[0]=='0'&& y.length()>1)
        {
            y.erase(0,1);
        }
        cout<<y<<endl;
    }
}
