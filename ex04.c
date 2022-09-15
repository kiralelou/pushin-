#include<unistd.h>
#include<assert.h>

int fibo(int n)
{
    if (n < 0)
        return -1;
    if (n < 2)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}


void main() {
    assert(fibo(-99) == -1);
    assert(fibo(-1) == -1);
    assert(fibo(0) == 1);
    assert(fibo(1) == 1);
    assert(fibo(2) == 2);
    assert(fibo(3) == 3);
    assert(fibo(4) == 5);
}
