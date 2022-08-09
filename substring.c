/* substring.c
 * The source file for substring, a program the gets a string from the user and
 * removes a substring using parameters provided by the user.
 *
 *
 * 08/09/2022 test fgets result. puts used to test fgets. Printf used with
 * fgets gives me a leading blank on printing to screen.
 *
 * 08/09/2022 Got sub_string to work. Program works, needs testing.
 *
*/

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 80
const char string_prompt[] = "Enter string: ";
const char param_prompt[] = "Enter start and count: ";


void sub_string(const char string[], int start,
        int count, char result[]);








int main(int argc, char *argv[]) {

    char string[MAX_LENGTH + 1];
    char result[MAX_LENGTH + 1];
    int start, count;
    int index;
    index = 0;
    start = 0;
    count = 0;
    for(index = 0; index <= 79; ++index)
        result[index] = '\b';
    /* input */
        /* get a string from the user */
    puts(string_prompt);
    fgets(string, MAX_LENGTH, stdin);

        /* get the parameters of the substring from the user */
    puts(param_prompt);
    scanf("%i %i", &start, &count);

    /* check start and count for values */











    /* process */

    sub_string(string, start, count, result);

    /* output */

        /* output the substring (with a lable ) to the screen */

    puts(result);


    return(0);
}



void sub_string(const char string[], int start,
        int count, char result[]) {

    int i, j;
    i = 0;
    j = 0;

    for(i = start, j = 0; i <= count; ++i, ++j)
        result[j] = string[i];
    result[j + 1] = '\0';


}






