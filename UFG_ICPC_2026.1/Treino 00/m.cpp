#include <iostream>
using namespace std;

int main()
{
    int n, tam, sum;
    string str;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> tam >> str;
        sum = tam - 1;

        for (int k = 0; k < tam - 2; k++)
            if (str[k] == str[k+2])
                sum--;

        cout << sum << endl;
    }

    return 0;
}