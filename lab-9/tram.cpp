#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int n,a,b,sum=0,l=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        sum=(a+l)-b;
        if(sum<0)
        {
            l=0;
        }
        else
        {
            l=sum;
        }
    }
    cout<<sum;
    return 0;
}
