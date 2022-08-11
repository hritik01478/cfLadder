#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e7;
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

ll dfs(vector<ll> adj[], vector<bool> &vis, int i, ll a)
{
    ll mini = min(a, arr[i - 1]);
    vis[i] = true;
    for (auto it : adj[i])
    {
        if (!vis[it])
        {
            mini = dfs(adj, vis, it, mini);
        }
    }
    return mini;
}

void solve_hritik()
{
    ll m;
    cin >> n >> m;
    vector<ll> adj[n + 1];
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        sum += x;
        arr.push_back(x);
    }
    if (m == 0)
    {
        cout << sum << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<bool> vis(n + 1, false);
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            ans += dfs(adj, vis, i, arr[i - 1]);
        }
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