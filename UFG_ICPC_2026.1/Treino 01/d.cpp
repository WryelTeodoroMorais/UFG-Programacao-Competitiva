#include <iostream>
using namespace std;

int main()
{
    string str, aux;
    cin >> str;
    int i = 0, tam = str.size();

    for (int i = 0; i < tam; i++)
    {
        aux.push_back(str[i]);
        if (aux.size() > 2 && aux.substr(aux.size() - 3) == "ABC")
        {
            aux.pop_back();
            aux.pop_back();
            aux.pop_back();
        }
    }       

    cout << aux << '\n';

    return 0;
}