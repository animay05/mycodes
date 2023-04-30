#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int sum(int d,int n)
{
    // static int ans=n;
    static int ans=d;
    if(d==0)
    {
        return ans;
    }
    ans=n*(n+1)/2;
    d--;
    ans=sum(d,ans);
    return ans;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int d,n;
	    cin>>d>>n;
	    cout<<sum(d,n)<<endl;
	}
	return 0;
}
