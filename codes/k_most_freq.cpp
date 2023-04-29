#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <string>
#include <vector>
#include <iterator>
#include <map>

#define vi vector<int>
#define pii vector<int,int>
#define vii vector<pii>
#define ff first
#define ss second
#define rep(i,a,b) for (int i=a;i<b;i++)
#define setBits(x) builtin_popcount(x)
using namespace std;

signed main()
{
    int n,k;
    cin>>n>>k;

    vi a(n);
    rep(i,0,n)
    {
        cin>>a[i];
    }
    map<int,int> freq;
    rep(i,0,n)
    {
        int presentSize = freq.size();
        if(freq[a[i]]== 0 && presentSize==k)
            break;

        freq[a[i]]++;
    }

    vii ans;
    map<int,int> :: iterator it;
    for(it= freq.begin(); it!=freq.end(); it++)
    {
        if(it->ss != 0)
            ans.pb(it->ss, it.ff);
    }
    sort(ans.begin(), ans.end(), greater<pii>());
    vii :: iterator it1;

    for(itl = ans.begin(); it1!=ans.end(); it1++)
    {
        cout<< it1->ss <<" "<<it1->ff<<endl;
    }



}
