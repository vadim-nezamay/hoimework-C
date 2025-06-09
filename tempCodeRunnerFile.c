#include <stdio.h>

 int main()
   
 {
    int ch;
    printf("Введите 10 символов по одному:\n");

    for (int i = 0; i < 10; i++)
    {
       ch = getchar();
       printf("%d. '%c'\n",i, ch);
    }
    
    
    return 0;
}