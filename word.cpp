#include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    int money, bananas, price, cur_price, cur_money, borrow = 0;
    cin >> price >> money >> bananas;
    cur_money = money;
    for (int i = 1; i <= bananas; i++)
    {
        cur_price = i * price;
        if (cur_money < cur_price)
        {
            borrow += cur_price - cur_money;
            cur_money = 0;
        }
        else
        {
            cur_money -= cur_price;
        }
    }
    cout << borrow;
    return 0;
}