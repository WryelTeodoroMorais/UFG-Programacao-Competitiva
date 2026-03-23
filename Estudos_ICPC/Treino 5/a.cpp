#include <bits/stdc++.h>
using namespace std;

int binary_search(vector <long int> alunos, long int key) 
{
    int left = 0;
    int right = alunos.size() - 1;
    int mid;

    while (left <= right) 
    {
        mid = left + (right - left) / 2;
        if (alunos[mid] < key)
            left = mid + 1;
        else 
            right = mid - 1; 
    }

    return left;
}

int main()
{
    int n, q;
    cin >> n >> q;
    vector <long int> alunos(n), comparar(n);

    for (int i = 0; i < n; i++) 
        cin >> alunos[i];

    for (int i = 0; i < q; i++) 
        cin >> comparar[i];

    sort(alunos.begin(), alunos.end());
        
    for (int i = 0; i < q; i++)
        cout << n - binary_search(alunos, comparar[i]) << endl;

    return 0;
}