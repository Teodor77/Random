#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    srand(time(NULL));
    int Cifra;
    int n;
    printf("Dati n : ");
    scanf("%d", &n);
    Cifra=rand()%n;
    printf(" Numarul generat aleator este %d", Cifra);
}
