#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    int num;
    int result;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        result = pow(2, num) - 1;        

        cout << "Teste " << i + 1 << endl;
        cout << result << endl;
    }
    
    return 0;
}