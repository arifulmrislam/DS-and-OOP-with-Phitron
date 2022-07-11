#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[100001];
    cin >> s;
    int len = strlen(s);
    int count[26] = {0};
    for (int i = 0; i < len; i++)
    {
        int num = s[i] - 'a';
        count[num]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] == 0)
        {
            char c = i + 'a';
            cout << c;
            return 0;
        }
    }
    cout << "None";
}
