#include <iostream>

using namespace std;

int main()
{




    int n = 4;

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            cout << " ";
        }
        for (char ch = 'a'; ch <= 'a' + i; ch++) 
        {
            cout << ch;
        }
        cout << endl;
    }

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            cout << " ";
        }
        for (char ch = 'a'; ch <= 'a' + i; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }


    const int size = 5;
    for (int i = 0; i < size; ++i) 
    {
        for (int j = 0; j < size; ++j) 
        {
            if (j == size - i - 1) 
            {
                cout << (i + 1);
            }
            else cout << "0";
        }
        cout << endl;
    }



}


