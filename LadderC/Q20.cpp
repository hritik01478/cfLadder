#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 998244353;
ll n;
vector<ll> arr;

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

void solve_hritik()
{
    ll k, sum = 0, a = 1;
    cin >> n >> k;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x > (n - k))
        {
            sum += x;
        }
        arr.push_back(x);
    }
    // for (int i = n-k+1; i <=n; i++)
    // {
    //     sum += i;
    // }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > (n - k))
        {
            ans.push_back(i + 1);
        }
    }
    for (int i = 1; i < ans.size(); i++)
    {
        a = ((a % mod) * ((ans[i] - ans[i - 1]) % mod)) % mod;
    }
    cout << sum << " " << a << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve_hritik();
    }
}