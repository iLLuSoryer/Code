#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,score;
    while(cin>>n)
    {
        score=0;
        if(n<=10)
            score=n*6;
        else if(n<=20)
            score=60+(n-10)*2;
        else if(n<=40)
            score=80+(n-20);
        else
            score=100;
        cout<<score<<endl;

    }
}
