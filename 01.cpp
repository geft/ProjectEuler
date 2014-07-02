#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int limit = 0;

    cin >> limit;

    for (int i = 0; i < limit; i++)
    {
        if (i % 3 == 0 || i %5 == 0)
            sum += i;
    }

    cout << sum;

    return 0;
}
