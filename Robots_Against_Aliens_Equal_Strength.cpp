#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;

    long long int target = -1;
    bool ok = true;

    for (int i = 0; i < r; i++)
    {
        long long int sum = 0;
        bool is_zero = false;

        for (int j = 0; j < c; j++)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                is_zero = true;
            }
            else
            {
                sum = sum + x;
            }
        }

        if (is_zero == false)
        {
            if (target == -1)
            {
                target = sum;
            }
            else if (sum != target)
            {

                ok = false;
            }
        }
    }

    if (ok == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
