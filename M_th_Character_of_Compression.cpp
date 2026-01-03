#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    long long m;
    cin >> s >> m;

    long long int curr_len = 0;

    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        long long int rept = 1;

        if (i + 1 < s.size() && isdigit(s[i + 1]))
        {
            rept = s[i + 1] - '0';
            i++;
        }

        if (curr_len + rept >= m)
        {
            cout << ch;
            return 0;
        }

        curr_len = curr_len + rept;
    }

    return 0;
}
