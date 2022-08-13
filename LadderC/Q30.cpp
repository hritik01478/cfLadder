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
    cin >> n;
    ll k1, k2;
    cin >> k1;
    deque<int> a, b;
    unordered_set<string> us;
    for (ll x = 0; x < k1; x++)
    {
        ll temp;
        cin >> temp;
        a.push_back(temp);
    }
    cin >> k2;
    for (ll x = 0; x < k2; x++)
    {
        ll temp;
        cin >> temp;
        b.push_back(temp);
    }
    ll c = 0;
    while (1)
    {
        if (a.size() == 0)
        {
            cout << c << " " << 2 << "\n";
            return;
        }
        else if (b.size() == 0)
        {
            cout << c << " " << 1 << "\n";
            return;
        }
        string s = "";
        for (auto x : a)
            s += ":" + to_string(x);
        s += ".......";
        for (auto x : b)
            s += ":" + to_string(x);
        if (us.find(s) != us.end())
        {
            cout << "-1\n";
            return;
        }
        cerr << s << "\n";
        us.insert(s);
        ll v1 = a.front();
        a.pop_front();
        ll v2 = b.front();
        b.pop_front();
        if (v1 < v2)
        {
            b.push_back(v1);
            b.push_back(v2);
        }
        else
        {
            a.push_back(v2);
            a.push_back(v1);
        }
        c++;
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