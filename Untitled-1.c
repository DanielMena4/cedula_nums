#include <stdio.h>
int main(){
    int cedula,snum, aux2;
    int aux = 0;
    int par = 0;
    scanf("%d", &cedula);
    snum = cedula%10;
    cedula = cedula / 10;
    while(cedula != 0)
    {
        if(par==0)
        {
            if(2*(cedula % 10)>10)
            {
                aux2 = 2*(cedula%10);
                aux+= aux2%10;
                aux2 = aux2 / 10;
                aux+= aux2%10;
            }
            else
            {
                aux+= 2 * (cedula % 10); 
            }
            cedula = cedula /10;
            par = 1;
        }
        else
        {
            aux+= cedula%10;
            par = 0;
            cedula= cedula/10;
        }
    }
    aux = (aux%10);
    aux = 10 - (aux % 10);
    printf("\n El numero ingresado fue: %d", snum);
    printf("\n El numero calculado fue: %d", aux);
    if(snum == aux)
    {
        printf("\n El numero de cedula es valido");
    }
    else
    {
        printf("\n El numero de cedula no es valido");
    }
    return 0;
}