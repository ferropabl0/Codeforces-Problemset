#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int a, b, res = 0;
    cin >> a >> b;

    while (a <= b)
    {
        a *= 3;
        b *= 2;
        res++;
    }
    cout << res;
    return 0;
}