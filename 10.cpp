#include <iostream>
using namespace std;

int checkPrime (long num)
{
    bool isPrime = true;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            isPrime = false;
    }

    return isPrime;
}

int main()
{
    long num = 2000000;
    long long sum = 2;

    for (int i = 3; i <= num; i += 2)
    {
        if (i % 5 != 0)
            if (checkPrime(i))
                sum += i;

        cout << "Current index is " << i << "\n";
    }

    cout << sum;

    return 0;
}

