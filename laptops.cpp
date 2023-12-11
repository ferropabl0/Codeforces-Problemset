#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int n, q, p;
    cin >> n;

    while (n--)
    {
        cin >> p >> q;
        if (p != q)
        {
            cout << "Happy Alex";
            return 0;
        }
    }
    cout << "Poor Alex";
    return 0;
}