#include <iostream>
using namespace std;

int main()
{
    int n;
    long int final = 0, aux;
    cin >> n;
    for (int i = 0; i < n; i++)
    {       
        cin >> aux;
        final = final + aux;
        if (final < 0)
            final = 0;
    }
    
    cout << final << endl;

    return 0;
}