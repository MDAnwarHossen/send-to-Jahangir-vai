#include <stdio.h>

int main()
{
    long long int n, m, k, min = 0, totalKatryoshkas = 0;
    scanf("%lld %lld %lld", &n, &m, &k);

    // Firstly, we will try to make Katryoshka with one eye, one mouth, and one body. Because with this combination, we can make largest number of Katryoshkas.
    if (n >= 1 && m >= 1 && k >= 1)
    {
        if (n <= m && n <= k)
        {
            // If n is the smallest number, we will reassign min as n and subtract min from m, k, and n. This is because this combination produces the number of Katryoshkas specified.
            min = n;
            m = m - min;
            k = k - min;
            n = n - min;
            totalKatryoshkas = totalKatryoshkas + min;
        }
        else if (m <= n && m <= k)
        {
            // I expressed the same idea in my earlier comment
            min = m;
            n = n - min;
            k = k - min;
            m = m - min;
            totalKatryoshkas = totalKatryoshkas + min;
        }
        else
        {
            // I expressed the same idea in my earlier comment
            min = k;
            n = n - min;
            m = m - min;
            k = k - min;
            totalKatryoshkas = totalKatryoshkas + min;
        }
    }

    // Then we will try with this combination - Two eyes and one body.

    if (n >= 2 && k >= 1)
    {
        // n is divided by 2 because it takes two n's to make one Katryoshka.
        n = n / 2;
        if (n < k)
        {
            min = n;
            k = k - min;
            n = n - min;
            totalKatryoshkas = totalKatryoshkas + min;
        }
        else
        {
            min = k;
            n = n - min;
            k = k - min;
            totalKatryoshkas = totalKatryoshkas + min;
        }
    }

    printf("%lld", totalKatryoshkas);

    return 0;
}