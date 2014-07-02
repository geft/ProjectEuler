#include <iostream>
using namespace std;

int checkPrime (long long num)
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
    long long num = 600851475143;
    int prime = 0;

    for (int i = num; i > 1; i--)
    {
        if (checkPrime(i))
        {
            prime = i;
            break;
        }

        cout << "Current index is " << i << "\n";
    }

    cout << prime;

    return 0;
}

