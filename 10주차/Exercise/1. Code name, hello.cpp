#include <stdio.h>

char h()
{
   return 'k';
}
char e()
{
    return 'i';
}
char l()
{
    return 'l';
}
char o()
{
    return '!';
}

int main()
{
    printf("%c%c%c%c%c", h(), e(), l(), l(), o());
    
    return 0;
}
