#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, n1, n2, n3;
    cin >> a >> b >> c;
    
    n1 = a*10 + b + c;
    n2 = a + b*10 + c;
    n3 = a + b + c*10;
    
    cout << max(n1, max(n2, n3)) << endl;
    return 0;
}