#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int cnt[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        cnt[s[i] - 'a']++;
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (cnt[s[i] - 'a'] == 1)
        {
            cout << s[i];
            return 0;
        }
    }

    cout << -1;
    return 0;
}
