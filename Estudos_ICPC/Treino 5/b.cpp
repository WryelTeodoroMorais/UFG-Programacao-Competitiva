#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, aux;
    cin >> n;
    set <long int> numbers;

    for (int i = 0; i < n; i++) 
    {
        cin >> aux;
        numbers.insert(aux);
    }
   
    cout << numbers.size() << endl;

    return 0;
}