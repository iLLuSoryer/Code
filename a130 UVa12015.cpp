#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[10];
    int v[10];
    int cases,counter=1;
    cin>>cases;
    while(cases--)
    {
        int answerindex=0;
        for(int i=0;i<10;i++)
        {
            cin>>s[i]>>v[i];
        }

        int maximum=v[0];
        for(int i=1;i<10;i++)
        {
            if(v[i]>maximum)
            {
                maximum=v[i];
            }
        }
        cout<<"Case #"<<counter<<":"<<endl;
        for(int i=0;i<10;i++)
        {
            if(maximum==v[i])
            cout<<s[i]<<endl;
        }
        counter++;
    }
}
