#include <bits/stdc++.h>
int nt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    if (nt(n))
        printf("%d Là số nguyên tố", n);
    else
        printf("%d Không là số nguyên tố", n);
    return 0;
}