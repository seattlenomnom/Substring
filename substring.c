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
    int start, count;
    int index, length;
    index = 0;
    start = 0;
    count = 0;
    length = 0;


    /* input */
        /* get a string from the user */

    puts(string_prompt);
    index = 0;
    do {
        character = getchar();
        string[index] = character;
        ++index;
    } while((character != '\n') && (index <= MAX_LENGTH - 2));
    string[index - 1] = '\0';

    printf("The string is:\n");
    printf("%s\n", string);

        /* get the parameters of the substring from the user */
    puts(param_prompt);
    scanf("%i %i", &start, &count);
    printf("start = %i, count = %i\n", start, count);


    /* determine string length */

    index = 0;
    while((string[index] != '\0'))
        ++index;
    length = index;
    printf("string lenght is %i\n", length);






    /* check start and count for values */











    /* process */

/*    sub_string(string, start, count, result); */

    /* output */

        /* output the substring (with a lable ) to the screen */

/*    puts(result);  */


    return(0);
}



void sub_string(const char string[], int start,
        int count, char result[]) {

    int i, j;
    size_t length;
    i = 0;
    j = 0;
    length = 0;

    /* check parameters, if odd perform something reasonalble */

    /* determine length of string */

    length = strlen(string);
    if(length < (count + start))
        count = length - start;

    for(i = start, j = 0; i <= count; ++i, ++j)
        result[j] = string[i];
    result[j + 1] = '\0';


}






