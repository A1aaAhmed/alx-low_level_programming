#include <stdlib.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
        char [27] alph="abcdefghijklmnopqrstuvwxyz";
        for (int i=0;i<27;i++){
	if ( alph[i]!='e' && alph[i]!='q'){ 
                putchar(alph[i]);}
        }
        putchar("\n");
        return (0);
}
