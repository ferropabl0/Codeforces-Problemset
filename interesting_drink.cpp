#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int n, aux, d, mon, res;
    cin >> n;
    vector<int> x;

    while (n--)
    {
        cin >> aux;
        x.push_back(aux);
    }
    sort(x.begin(), x.end());
    cin >> d;
    while (d--)
    {
        cin >> mon;
        res = upper_bound(x.begin(), x.end(), mon) - x.begin();
        cout << res << endl;
    }

    return 0;
}