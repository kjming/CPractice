#include <stdio.h>

int main() {

    int n = 1;
    int next;

    while (n > 6)
    {
        next = 0;
        while (n != 0)
        {
            next += (n % 10 * (n % 10));
            n /= 10;
        }
        n = next;
    }
    
    return 0;
}