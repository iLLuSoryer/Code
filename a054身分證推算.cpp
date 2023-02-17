#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,sum=0,times=1,check;
    int a[26]{10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
    string alp="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i=0;i<26;i++)
    {
        a[i]=(a[i]%10)*9+(a[i]/10)%10;
    }
    cin>>num;
    check=num%10;
    num/=10;
    for(int i=0;i<8;i++)
    {
        sum+=(num%10)*times;
        num/=10;
        times++;
    }

    for(int i=0;i<26;i++)
    {
        int c=10-(a[i]+sum)%10;
        if(c==10)
            c=0;
        if(c==check)
            cout<<alp[i];
    }
}
