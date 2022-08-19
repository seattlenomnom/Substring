/* substring.c
 * The source file for substring, a program the gets a string from the user and
 * removes a substring using parameters provided by the user.
 *
 *
 * 08/09/2022 test fgets result. puts used to test fgets. Printf used with
 * fgets gives me a leading blank on printing to screen.
 *
 * 08/09/2022 Got sub_string to work. Program works, needs testing.
 * 08/09/2022 put parameter checks into sub_string. I'm not understanding
 * how strlen() and size_t work. Fire up and praactice GDB.
 *
 * 08/16/2022
 * ok, complicated situation: stripped out all the more advanced c library
 * string functions. use getchar() to get a character from the console, then
 * use do...while to create the string.
 *
 * max_length changed to 81. eighty for the string one for the \0.
 *
 * use puts() for message strings, but i need to study c libray string
 * functions and their proper use.
 *
 * don't "initialize" the strings.
 *
 * added string length capability.
 *
 * rewrote sub_string();
*/

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 81
const char string_prompt[] = "Enter string: ";
const char param_prompt[] = "Enter start and count: ";


void sub_string(const char string[], int start,
        int count, char result[]);








int main(int argc, char *argv[]) {

    char string[MAX_LENGTH], character;
    char result[MAX_LENGTH];
    int start_index, count;
    int index, length, end_index;
    index = 0;
    start_index = 0;
    count = 0;
    length = 0;
    end_index = 0;


    /* input */
        /* get a string from the user */

    puts(string_prompt);    /* leave here, but learn to use properly */
    index = 0;
    do {
        character = getchar();
        string[index] = character;
        ++index;
    } while((character != '\n') && (index <= MAX_LENGTH - 2));
    string[index - 1] = '\0';


        /* get the parameters of the substring from the user */
    puts(param_prompt);
    scanf("%i %i", &start_index, &count);


    /* determine string length */

    index = 0;
    while((string[index] != '\0'))
        ++index;
    length = index;


    end_index = length - 1;


    sub_string(string, start_index, count, result);



    /* output */


    printf("The substring is:\n");
    printf("%s\n", result);


    return(0);
}



void sub_string(const char string[], int start_index,
        int count, char result[]) {

    int i, j, index, end_index;
    char length;
    i = 0;
    j = 0;
    length = 0;
    end_index = 0;

    /* check parameters, if odd perform something reasonalble */
/* determine length of string, calculate end_index */

    index = 0;
    while(string[index] != '\0')
        ++index;
    length = index;
    end_index = length - 1;

    /* check start_index, end_index, and count for consistency */

    if(start_index > end_index)
        start_index = end_index;
    else if((start_index + count) > end_index)
        count = end_index - start_index;


    /* create result[] */

    i = 0;
    while(i <= count){
        result[i] = string[i + start_index];
        ++i;
    };

}






