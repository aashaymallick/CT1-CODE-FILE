#include <stdio.h>
int main()
{
    int T;
    int i, j;
    scanf("%d", &T);
    while (T--)
    {
        int count = 0;
        int matprob[100];
        int n;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &matprob[i]);
        }
        for (i = 0; i < n; i++)
        {
            int sum = 0, product = 1;
            for (j = i; j < n; j++)
            {
                sum += matprob[j];
                product *= matprob[j];
                if (sum == product)
                    count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}