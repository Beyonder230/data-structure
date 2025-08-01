#include <stdio.h>

void TOH(int n, int A, int B, int C)
{
    if (n > 0)
    {
        TOH(n - 1, A, C, B);
        printf("from %d to %d\n", A, C);
        TOH(n - 1, B, A, C);
    }
} // time complexity: O(2**n)

int main()
{
    TOH(3, 1, 2, 3);
}