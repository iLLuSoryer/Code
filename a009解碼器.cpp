#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        int len=s.length();
        for(int i=0;i<len;i++)
            s[i]-=7;
        cout<<s<<endl;
    }
}
