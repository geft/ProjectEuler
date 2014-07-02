#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int total = 2;
    int limit = 0;
    int num1 = 1;
    int num2 = 2;

    cin >> limit;

    do
    {
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;

        if (sum % 2 == 0)
            total += sum;
    } while (sum < limit);

    cout << total;

    return 0;
}

