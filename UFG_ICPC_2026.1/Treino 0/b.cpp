#include <iostream>
#include <set>
using namespace std;

int main()
{
    string X;
    cin >> X;
    set <char> aux;
    
    for (int i = 0; i < X.size(); i++)
        aux.insert(X[i]);

    if (aux.size() % 2 == 1)
       cout << "IGNORE HIM!" << endl;
    else
       cout << "CHAT WITH HER!" << endl;

    return 0;
}