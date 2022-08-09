#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e7;
ll n;

// ll gcd(ll a, ll b)
// {
//     return b == 0 ? a : gcd(b, a % b);
// }

// ll power(ll x, ll y)
// {
//     ll res = 1;
//     if (y == 0)
//         return 1;
//     while (y)
//     {
//         if ((y & 1LL))
//         {
//             res = (res * x) % mod;
//             y--;
//         }
//         y >>= 1LL;
//         x = (x * x) % mod;
//     }
//     return res;
// }

// ll digits(ll n)
// {
//     ll ctr = 0;
//     while (n)
//     {
//         ctr++;
//         n /= 10;
//     }
//     return ctr;
// }

int reverseSum(int n)
{
    int rev = 0;
    for (; n > 0; n /= 10)
        rev = rev * 10 + (n % 10);

    return rev;
}

int solve_hritik()
{
    cin >> n;
    vector<int> arr, a;
    map<int, int> mp;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (mp[x] == 0)
        {
            arr.push_back(x);
            mp[x]++;
        }
        else if (mp[x] == 1)
        {
            a.push_back(x);
            mp[x]++;
        }
        else if (mp[x] >= 2)
        {
            mp[x]++;
            flag = true;
        }
    }
    if (flag)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        sort(arr.begin(), arr.end());
        cout << arr.size() << endl;
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        sort(a.rbegin(), a.rend());
        cout << endl
             << a.size() << endl;
        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve_hritik();
    }
}