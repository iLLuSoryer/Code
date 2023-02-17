#include<bits/stdc++.h>
using namespace std;

void bin(int num)
{
    stack<int> sum;
    int counter=0;
    while(true)
    {
        if(num>0)
        {
            sum.push(num%2);
            num/=2;
            counter++;
        }
        else break;
    }
    while(!sum.empty())
    {
        cout<<sum.top();
        sum.pop();
    }
}

int main()
{
    int num;
    while(cin>>num)
    {
        bin(num);
        cout<<endl;
    }
}
