#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,times,sum;
    vector<int> v;
    vector<int> ans;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        int tem=i;
        v.clear();
        times=0; sum=0;
        while(tem>0)
        {
            v.push_back(tem%10);
            times++;
            tem/=10;
        }
        for(int j=0;j<v.size();j++)
        {
            sum+=pow(v[j],times);
        }
        if(i==sum)
            ans.push_back(i);
    }
    if(ans.empty())
        cout<<"none"<<endl;
    else
    {
        cout<<ans[0];
        for(int i=1;i<ans.size();i++)
            cout<<" "<<ans[i];
    }
    cout<<endl;
}
