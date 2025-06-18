#include <stdio.h>
#include <stdlib.h>

int cont = 0;

int main()
{
    cont ++;
    printf("%d\n",cont);
    if(cont<10) return(main());
    else 
    {
        getchar();
        return 0;
    }
 

}
