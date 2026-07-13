#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <vector <int> > matriz(9, vector <int>(9));
    map <int, int> freq1, freq2, freq3;


    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> matriz[i][j];
            freq1[matriz[i][j]]++;
        }

        if (freq1.size() != 9)
        {
            cout << "No\n";
            return 0;
        }

        freq1.clear();
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
            freq1[matriz[j][i]]++;

        if (freq1.size() != 9)
        {
            cout << "No\n";
            return 0;
        }

        freq1.clear();
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            freq1[matriz[i][j]]++;

        for (int j = 3; j < 6; j++)
            freq2[matriz[i][j]]++;

        for (int j = 6; j < 9; j++)
            freq3[matriz[i][j]]++;
    }

    if (freq1.size() != 9 || freq2.size() != 9 || freq3.size() != 9)
    {
        cout << "No\n";
        return 0;
    }

    freq1.clear();
    freq2.clear();
    freq3.clear();  

    for (int i = 3; i < 6; i++)
    {
        for (int j = 0; j < 3; j++)
            freq1[matriz[i][j]]++;

        for (int j = 3; j < 6; j++)
            freq2[matriz[i][j]]++;

        for (int j = 6; j < 9; j++)
            freq3[matriz[i][j]]++;
    }

    if (freq1.size() != 9 || freq2.size() != 9 || freq3.size() != 9)
    {
        cout << "No\n";
        return 0;
    }

    freq1.clear();
    freq2.clear();
    freq3.clear();  

    for (int i = 6; i < 9; i++)
    {
        for (int j = 0; j < 3; j++)
            freq1[matriz[i][j]]++;

        for (int j = 3; j < 6; j++)
            freq2[matriz[i][j]]++;

        for (int j = 6; j < 9; j++)
            freq3[matriz[i][j]]++;
    }

    if (freq1.size() != 9 || freq2.size() != 9 || freq3.size() != 9)
    {
        cout << "No\n";
        return 0;
    }

    cout << "Yes\n";

    return 0;
}