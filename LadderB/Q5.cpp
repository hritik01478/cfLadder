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

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    vector<ll> presum(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    if (n == 2)
    {
        if (arr[0] == arr[1])
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
        return;
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        presum[i + 1] = presum[i] + arr[i];
    }
    ll ctr = 0;
    for (int i = n - 1; i > 1; i--)
    {
        ll x = (arr[i - 1] * i) - presum[i];
        if (x == 0)
        {
            cout << ctr << endl;
            return;
        }
        ctr++;
        if (x <= (presum[n] - presum[i]))
        {
            cout << ctr << endl;
            return;
        }
    }
    cout << n - 1 << endl;
    return;
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
        solve();
    }
}