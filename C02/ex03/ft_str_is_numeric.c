#include<unistd.h>
#include<stdio.h>

int ft_str_is_numeric(char *str)
{
    int i = 0;
    if(str[i] == '\0')
    return (1);
    while (str[i] != '\0')
    {
        if (str[i] >= 48 && str[i] <= 57)
            i++;
    
        else
        return (0);
    }
    return (1); 
}
int main()
{  
     printf("%d\n",ft_str_is_numeric("012345"));
    printf("%d\n",ft_str_is_numeric("-012345q"));
    printf("%d\n",ft_str_is_numeric(""));
}