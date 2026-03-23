#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int numbers[n], mex = 0, aux = 0;
    set <int> s;

    for (int i = 0; i < n; i++)
    {       
        cin >> numbers[i];
        s.insert(numbers[i]);
    }
    
    for (int x : s)
    {
        if (aux == k)
            break;
        if (x == mex)
        {
            mex++;
            aux++;
        }
    }
    cout << mex << endl;

    return 0;
}