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
    map<ll, int> mp;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        arr.push_back(x);
        mp[x]++;
    }
    int ctr = 0;
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        ll x = log2(arr[i]) + 1;
        bool flag = false;
        for (int j = x; j <= 32; j++)
        {
            // cout << x << endl;

            ll rem = powl(2, j) - arr[i];
            if (rem > 1e9)
            {
                break;
            }
            if (rem == arr[i])
            {
                if (mp[rem] > 1)
                {
                    flag = true;
                    break;
                }
                else
                {
                    continue;
                }
            }
            else if (mp[rem])
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            // cout << arr[i] << " ";
            ctr++;
        }
    }
    cout << ctr << endl;
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