#include <iostream>
using namespace std;

int main()
{
    int n, tam;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str;
        int flag = 0;
        cin >> str;
        tam = str.size();

        if (tam % 2 == 1)
            flag = 1;
        else
            for (int j = 0; j < tam / 2; j++)
            {
                if (str[tam-j-1] == ')' && str[j] != '(')
                {
                    flag = 1;
                    break;
                }
                if (str[tam-j-1] == '}' && str[j] != '{')
                {
                    flag = 1;
                    break;
                }
                if (str[tam-j-1] == ']' && str[j] != '[')
                {
                    flag = 1;
                    break;
                }
            }

        if (!flag)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}