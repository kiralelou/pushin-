#include<unistd.h>
#include<stdio.h>


 
int ft_str_is_printable (char *str)
{
    int i = 0;
    if (str[i] == '\0')
        return (1);
    while (str[i] != '\0')
    {
        if(str[i] >= 32 && str[i] <= 126)
        i++;
        else
        return (0);
    }  
    return (1);
}
int main()
{
     printf("%d\n",ft_str_is_printable("012345azeAZ"));
    printf("%d\n",ft_str_is_printable ("azeAZZERTGF"));
    printf("%d\n",ft_str_is_printable("ÄÇ"));

    printf("%d\n",ft_str_is_printable(""));
}
  