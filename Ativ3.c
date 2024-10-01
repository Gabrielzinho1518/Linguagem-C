#include <stdio.h>
int main(){
    char palavra [20], *p;
    int q = 0;
    p = palavra;
    gets(palavra);
    while (*p!='\0'){
        q++;
        p++;
    }
    printf("Quantidade de letras = %d", q);

/* for ( ; *p! = '\0'; ){
    q++;
    p++;
*/
return 0;
}
