#include <iostream>
using namespace std;

int main()
{
    int N = 0;
    int ini;
    int end;
    int result;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cin >> ini >> end;
        result = 0;

        for (int j = ini; j <= end; j++)
        {
            if(j%2 != 0) result +=j;
        }
        
        cout << "Caso "<< i << ": " << result << endl;
    }
    
    return 0;
}
