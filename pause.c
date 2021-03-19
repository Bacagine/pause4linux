/* Git Hub: https://github.com/Bacagine/pause4linux
 *
 * pause.c: Pause for linux systems
 * 
 * Compilar com gcc -o pause pause.c -lconio
 * 
 * Desenvolvedores: Gustavo Bacagine <gustavo.bacagine@protonmail.com>
 * 
 * Data: 19/03/2021
 */

#include <stdio.h>
#include <conio.h>

int main(void){
    printf("\nPress any key to continue. . .");

    getch();
    putchar('\n');
    
    return 0;
}

