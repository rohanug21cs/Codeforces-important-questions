#include<bits/stdc++.h>
using namespace std;
long long int kadanealgo(vector<long long int> &vec,int l,int r)
{
    long long int sum=0,maxi=INT_MIN;
    for(int i=l;i<r;i++)
    {
        sum+=vec.at(i);
        if(sum>maxi)
        {
            maxi=sum;
        }
        if(sum<0)
        {
            sum=0;
        }
    }
    return maxi;
    
}
long long int Yasser(vector<long long int> &vec)
{   long long int sum=0;
    for(auto it:vec)
    {
        sum+=it;   
    }
    return sum;
}
int main()
{   int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        vector<long long int> vec;
        for(int j=0;j<n;j++)
        {   long long int temp;
            cin>>temp;
            vec.push_back(temp);
        }
        long long int Y=Yasser(vec);
        long long int A=max(kadanealgo(vec,0,n-1),kadanealgo(vec,1,n));
        if(Y<=A) 
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
