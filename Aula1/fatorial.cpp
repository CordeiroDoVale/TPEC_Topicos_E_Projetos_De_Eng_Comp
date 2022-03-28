#include <iostream>

using namespace std;

int main()
{
    bool stop = false;
    int t, n;
    long int f;
    int count = 1;

    do
    {
        cin >> t;
        if(t == 0) 
        {
            stop = true;
        } else 
        {
            cout << "Teste " << count << endl;
            cin >> n;
            count++;    
        }

        while(stop =! true)
        {
            f = 1;
            for (int i = 1; i <= n; i++)
            {
                f *= i;
            }
            cout << f << endl;        
        }

    }while(stop =! true);


    return 0;
}