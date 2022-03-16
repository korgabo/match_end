#include <stdio.h>
#include "prog1.h"
#include <string.h>


int match_ends(int n, string words[]){
    int egyezo = 0;
    for(int i = 0; i < n; ++i){
        string szo = words[i];
            if ((strlen(szo) >= 2) && (szo[0] == szo[strlen(szo)-1])){
            ++egyezo;
            }
        }
    return egyezo;
}

int main()
{
    string szavak1[] = { "aba", "xyz", "aa", "x", "bbb" };
    int szavak1_meret = 5;

    printf("Az alábbi sztringekből összesen %d felel meg, a megadott feltételnek.", match_ends(szavak1_meret, szavak1));
    for (int i = 0; i < szavak1_meret; ++i)
    {
        puts(szavak1[i]);
    }

    return 0;
}
