#include<unistd.h>
#include<assert.h>

int ft_sqrt(int n)
{
    int i = 1;
    if (n < 1)
        return 0;
    while (i * i <= n)
    {
        if ((i * i) == n)
            return i; 
        i++;
    }
    return 0;
}


void main() {
    assert(ft_sqrt(-99) == 0);
    assert(ft_sqrt(-1) == 0);
    assert(ft_sqrt(0) == 0);
    assert(ft_sqrt(1) == 1);
    assert(ft_sqrt(2) == 0);
    assert(ft_sqrt(3) == 0);
    assert(ft_sqrt(4) == 2);
    assert(ft_sqrt(25) == 5);
    assert(ft_sqrt(100) == 10);
    assert(ft_sqrt(19) == 0);
}