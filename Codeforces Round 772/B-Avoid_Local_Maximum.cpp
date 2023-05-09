// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

typedef vector<ll> vi;
typedef vector<string> vs;

#define space ' '
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

#define b() begin()
#define e() end()
#define all(data) data.begin(), data.end()
#define rall(data) data.rbegin(), data.rend()

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");
#define setp(n) fixed << setprecision(n)

const double eps = 1e-12;
const int mx = 1e8 + 123;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{
    int n, i, j;
    cin >> n;
    vi v(n);
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int cnt = 0;
    for (i = 1; i < n - 1; i++)
    {
        if (v[i - 1] < v[i] and v[i] > v[i + 1])
        {
            v[i + 1] = (i + 2 < n) ? max(v[i], v[i + 2]) : v[i];
            cnt++;
        }
    }
    cout << cnt << endl;

    for (auto u : v)
    {
        cout << u << ' ';
    }
    cout << endl;
}

int main()
{
    Boost;

    int t = 1;
    cin >> t;
    while (t--)
    {
        Boom();
    }

    return 0;
}
