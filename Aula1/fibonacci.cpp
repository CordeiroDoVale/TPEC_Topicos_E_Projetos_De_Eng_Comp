#include <iostream>

using namespace std;

int main()
{
    int t;
    int n;
    
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;

        int fib[n];

        fib[0] = 1;
        fib[1] = 1;

        for (int j = 2; j < n; j++)
        {
            fib[j] = fib[j-1] + fib[j-2];   
        }

        cout << "Teste " << i + 1 << endl;

        for (int j = 0; j < n - 1; j++)
        {
           cout << fib[j] << " ";   
        }  
        cout << fib[n-1] << endl;
    }
    
    
    return 0;
}