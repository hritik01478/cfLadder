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

// const fruit = [ 'apple', 'banana', 'mango' ];
// fruit.push('kiwi');
// fruit[0] = 'kiwi';
// fruit = ['kela', 'aam'];

void solve_hritik()
{
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    vector<ll> first, second;
    for (int i = 0; i < n; i += 2)
    {
        cout << arr[i] << " ";
    }
    int x;
    if (n % 2)
    {
        x = n - 2;
    }
    else
    {
        x = n - 1;
    }
    for (int i = x; i >= 1; i -= 2)
    {
        cout << arr[i] << " ";
    }
}

signed
main()
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