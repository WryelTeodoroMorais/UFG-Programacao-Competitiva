#include <iostream>
#include <map>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int sum = 0;
    map <char, int> aux;

    for (int i = 0; i < 26; i++)
       aux[s[i]] = i;

    for (int i = 'B'; i <= 'Z'; i++)
        sum += abs(aux[i] - aux[(i-1)]);

    cout << sum << endl;

    return 0;
}