/* substring.c
 * The source file for substring, a program the gets a string from the user and
 * removes a substring using parameters provided by the user.
 *
 *
 * 08/09/2022 test fgets result. puts used to test fgets. Printf used with
 * fgets gives me a leading blank on printing to screen.
 *
*/

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 80
const char string_prompt[] = "Enter string: ";












int main(int argc, char *argv[]) {

    char string[MAX_LENGTH + 1];
    /* input */
        /* get a string from the user */
    puts(string_prompt);
    fgets(string, MAX_LENGTH, stdin);
        /* get the parameters of the substring from the user */











    /* process */













    /* output */

        /* output the substring (with a lable ) to the screen */












    return(0);
}
