#include <iostream>
using namespace std;

int gcd (int a, int b)
{
    if(a == 0)
        return b;
    return gcd(b % a, a);
}

int gcdn (int arr[], int n)
{
    int res = arr[0];

    for(int i = 1; i < n; i++)
    {
        res = gcd(arr[i], res);

        if (res == 1)
            return 1;
    }

    return res;
}

int main() {

    int t;
    cin >> t;

    while(t--)
    {
        int n, arr[50], i, fact;
        cin >> n;

        for (i = 0; i < n; i++)
            cin >> arr[i];

        fact = gcdn(arr, n);
         for (i = 0; i < n; i++)
            cout << arr[i] / fact << " ";

        cout << endl;
    }
    return 0;
    }
