#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv)
{int m, n, r;

    printf("Podaj pierwsza liczbe calkowita: ");
    scanf("%d", &m);

    printf("Podaj druga liczbe calkowita: ");
    scanf("%d", &n);

    /*r=m%n;
        while (r!=0)
        {
            m=n;
            n=r;
            r=m%n;
        };
        printf("Najwiekszym wspolnym dzielnikiem jest liczba %d", n);*/


    /*do
    {
        r=m%n;
        m=n;
        n=r;
    }while(r!=0);
    printf("Najwiekszym wspolnym dzielnikiem jest liczba %d", m);*/

/*for(r=m%n; r!=0; r=m%n)
{
    m=n;
    n=r;
}
printf("Najwiekszym wspolnym dzielnikiem jest liczba %d", n);*/


    //jednolinijkowce z while i z for

    /*
while((r=m%n)!=0)
{
    m=n;
    n=r;
}
printf("Najwiekszym wspolnym dzielnikiem jest liczba %d", n);*/

    for(m,n;(r=m%n)!=0; m=n, n=r);
    printf("Najwiekszym wspolnym dzielnikiem jest liczba %d", n);

    return 0;
}
