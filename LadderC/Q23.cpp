#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
typedef long long int ll;
ll mod = 1000000007;
ll n;
vector<ll> arr;

// ll gcd(ll a, ll b)
// {
//     return b == 0 ? a : gcd(b, a % b);
// }

ll power(ll x, ll y)
{
    ll res = 1;
    if (y == 0)
        return 1;
    while (y)
    {
        if ((y & 1LL))
        {
            res = (res * x) % mod;
            y--;
        }
        y >>= 1LL;
        x = (x * x) % mod;
    }
    return res;
}

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
    string str, ans = "";
    cin >> str;
    n = str.size();
    vector<pair<char, int>> arr;
    int ctr = 1;
    for (int i = 1; i < n; i++)
    {
        if (str[i] != str[i - 1])
        {
            arr.push_back({str[i - 1], ctr});
            ctr = 0;
        }
        ctr++;
    }
    arr.push_back({str[n - 1], ctr});
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i].second = min(arr[i].second, 2);
    }
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i - 1].second == 2 && arr[i].second == 2)
        {
            arr[i].second = 1;
        }
    }
    for (int i = 0; i < arr.size(); i++)
        for (int j = 0; j < arr[i].second; j++)
        {
            ans += arr[i].first;
        }

    cout << ans << endl;
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