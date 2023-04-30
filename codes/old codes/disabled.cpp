#include <iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    for(int i=0;i<m;m++){
        int n;
        cin>>n;
        if(n%2==0){
            cout<<n<<endl;
        }
        else{
            cout<<(n-1)<<endl;
        }
        break;
    }
    return 0;
}

