#include<stdio.h>

void BubbleSort(int* a, const int n)
{
    int i, r, buf, flag;
    flag = 1;
    r = n;
    do {
        flag = 0;
        for (i = 1; i < r; i++)
            if (a[i] < a[i - 1])
            {
                buf = a[i];
                a[i] = a[i - 1];
                a[i - 1] = buf;
                flag = 1;
            }
        r--;
    } while (flag);
}

void PrintArray(int* a, int sz)
{
    for (int i = 0; i < sz; i++)
        printf("a[%d] = %d\n", i, a[i]);
}