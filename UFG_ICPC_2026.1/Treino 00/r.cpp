#include <iostream>
#include <cctype>
using namespace std;

int comparador(string a, string b)
{
    for (int i = 0; i < a.size(); i++)
    {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }

    if (a < b)
        return -1;
    else if (a > b)
        return 1;
    else
        return 0;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    cout << comparador(s1, s2) << endl;

    return 0;
}