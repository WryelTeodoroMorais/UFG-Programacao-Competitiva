#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, target, cont = 0, esq = 0, sum = 0; 
    cin >> n >> target;
    vector <int> numbers(n);

    for (int i = 0; i < n; i++) 
        cin >> numbers[i];

    for (int dir = 0; dir < n; dir++) 
    {
        sum += numbers[dir];
       
        while (sum > target)
        {
            sum -= numbers[esq];
            esq++;
        }

        if (sum == target)
            cont++;
    }

    cout << cont << "\n";

    return 0;
}