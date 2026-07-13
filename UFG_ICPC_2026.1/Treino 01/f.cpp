#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, tam;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str;
        vector <char> vet;
        int flag = 1;
        cin >> str;
        tam = str.size();

        if (tam % 2 == 1)
            flag = 0;
        else
            for (int j = 0; j < tam; j++)
            {
                if (str[j] == '(' || str[j] == '{' || str[j] == '[')
                    vet.push_back(str[j]);
                else
                {
                    if (vet.empty())
                    {
                        flag = 0;
                        break;
                    }
                    if ((vet.back() == '(' && str[j] != ')') || (vet.back() == '[' && str[j] != ']') ||
                    (vet.back() == '{' && str[j] != '}'))
                    {
                        flag = 0;
                        break;
                    }
                    vet.pop_back();
                }
            }

        if (!vet.empty())
            flag = 0;

        if (flag)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}