#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double vetor[n];

    for (int i = 0; i < n; i++)
        cin >> vetor[i];

    sort(vetor, vetor + n);
    
    for (int i = 1; i < n; i++)
        vetor[i] = (vetor[i] + vetor[i - 1]) / 2;

    cout << vetor[n - 1] << endl;

    return 0;
}