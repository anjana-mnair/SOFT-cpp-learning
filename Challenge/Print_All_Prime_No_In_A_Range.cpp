#include <iostream>
using namespace std;
int main()
{
    int start, end;

    cout << "Enter range: ";
    cin >> start >> end;

    for (int n = start; n <= end; n++)
    {
        bool prime = true;

        if (n < 2)
            prime = false;

        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                prime = false;
                break;
            }
        }

        if (prime)
            cout << n << " ";
    }

    return 0;
}
