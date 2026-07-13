#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    long int sum = 0;
    cin >> n;
    vector <int> aux(n);
    
    for (int i = 0; i < n; i++)
        cin >> aux[i];
        
    for (int i = 1; i < n; i++)
        if (aux[i] < aux[i - 1])
        {
            sum += aux[i - 1] - aux[i];
            aux[i] = aux[i - 1];
        }

    cout << sum << endl;

    return 0;
}