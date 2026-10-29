#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<string, string> pss;
 
void solve()
{
    int n;
    cin >> n;
    char c;
    cin >> c;
    string s;
    cin >> s;
    int u_coin = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] == s[n - i - 1])
        {
            continue;
        }
        if (s[i] == c || s[n - i - 1] == c)
        {
            u_coin++;
        }
        else
        {
            u_coin += 2;
        }
    }
    cout << u_coin << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
 
    return 0;
}