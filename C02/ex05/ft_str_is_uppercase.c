#include<unistd.h>
#include<stdio.h>

int ft_str_is_uppercase(char *str)
{
    int i = 0;
    if (str[i] == '\0')
        return (1);
    while (str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        i++;
        else
        return (0);
    }  
    return (1);
}
int main()
{
     printf("%d\n",ft_str_is_lowercase("012345azeAZ"));
    printf("%d\n",ft_str_is_lowercase("AZZERTGF"));
    printf("%d\n",ft_str_is_lowercase("azererzere"));

    printf("%d\n",ft_str_is_lowercase(""));
}