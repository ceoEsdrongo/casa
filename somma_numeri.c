// dopo aver inserito n numeri interi inserisci n scelte dall' utente sommarli e determinare la media
#include <stdio.h>
int main()
{
    int num, n, somma = 0, cont;
    float media;
    printf("Quanti numeri vuoi inserire\n");
    scanf("%d", &n);
    cont = n;
    while (n > 0)
    {
        printf("inserisci un numero\n");
        scanf("%d", &num);
        somma += num;
        n--;
    }
    media = (float)somma / cont;
    printf("la somma e' : %d\n", somma);
    printf("la media e' : %.2f\n", media);
    return 0;
}
