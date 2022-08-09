#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e7;
ll n;

ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}

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

ll digits(ll n)
{
    ll ctr = 0;
    while (n)
    {
        ctr++;
        n /= 10;
    }
    return ctr;
}

void solve()
{
    int x;
    cin >> n >> x;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        arr[i].first = min(a, b);
        arr[i].second = max(a, b);
    }

    int mini = 1000, maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].first > maxi)
        {
            maxi = arr[i].first;
        }
        if (arr[i].second < mini)
        {
            mini = arr[i].second;
        }
    }
    // cout << "mini" << mini << "maxi" << maxi;
    int a = maxi, b = mini;
    if (a > b)
    {
        cout << -1 << "\n";
    }
    else
    {
        if ((a - x) <= 0 && (x - b) <= 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << max(a - x, x - b) << "\n";
        }
    }
    return;
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
        solve();
    }
}