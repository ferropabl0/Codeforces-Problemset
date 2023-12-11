#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    string s;
    cin >> s;
    int res[s.length()], sum = 0;
    res[0] = 0;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            sum++;
        }
        res[i] = sum;
    }

    int n, l, r;
    cin >> n;
    while (n--)
    {
        cin >> l >> r;
        cout << res[r - 1] - res[l - 1] << endl;
    }

    return 0;
}