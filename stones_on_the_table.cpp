#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int num, res = 0;
    char curr, next;

    cin >> num >> curr;
    num--;
    while (num--)
    {
        cin >> next;
        if (curr == next)
        {
            res++;
        }
        else
        {
            curr = next;
        }
    }

    cout << res;
}