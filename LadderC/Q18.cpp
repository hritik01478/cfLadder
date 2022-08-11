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

void solve_hritik()
{
    cin >> n;
    ll sum = 0;
    vector<ll> preffix(n + 1, 0), suffix(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        sum += x;
        arr.push_back(x);
        preffix[i + 1] = max(x, preffix[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        // cout<<arr[i]<<" ";
        suffix[i] = max(suffix[i + 1], arr[i]);
    }

    int ctr = 0;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        ll rem = sum - arr[i];
        ll maxi = max(preffix[i], suffix[i + 1]);
        if ((rem - maxi) == maxi)
        {
            ctr++;
            ans.push_back(i + 1);
        }
    }
    if (ctr)
    {
        cout << ctr << endl;
        for (int i = 0; i < ctr; i++)
        {
            cout << ans[i] << " ";
        }
    }
    else
    {
        cout << ctr << endl;
    }
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