#include <iostream>

bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n, l, r;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> l >> r;
        for (int i = l; i <= r; i++)
        {
            if (isPrime(i))
                std::cout << i << " ";
        }
        std::cout << std::endl;
    }
}