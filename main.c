/*

algoritmo di ricerca binaria
spicoli piersilvio - uniba informatica
16/02/02

*/

#include <stdio.h>

int a[] = {2, 10, 1, 5, 6};
int n = sizeof(a) / sizeof(a[0]), i; //dim
int binarySearch(int);

int binarySearch(int x){

    int pos = 0;
    int primo = 1, ultimo = n;
    int flag = 0;

    while((primo <= ultimo) && (pos == 0)){

        i = (primo + ultimo) / 2;
        if(a[i] == x){
            pos = i;
            flag = 1;
        }else{
            if(a[i] < x){
                primo = i + 1;
            }else{
                ultimo = i - 1;
            }
        }
    }

    if(flag == 1)
        return a[pos];
    else
        return -1; //nel caso in cui l'elemnto non esiste!!
}

int main(){

    int el;

    scanf("%d", &el);
    int p = binarySearch(el);

    if(p == -1)
        printf(":: elemento non trovato\n");
    else
        printf(":: l'elemento è stato trovato %d", p);

    return 0;
}
