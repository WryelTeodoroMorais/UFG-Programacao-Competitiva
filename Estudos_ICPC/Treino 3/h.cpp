#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long int n;
    cin >> n;
    long int vetor[n];

    for (int i = 0; i < n; i++)
        cin >> vetor[i];

    sort(vetor, vetor + n);

    if (n % 2 == 0)
        cout << vetor[(n/2)] - vetor[n/2-1] << endl;
    else
        cout << 0 << endl;  

    return 0;
}