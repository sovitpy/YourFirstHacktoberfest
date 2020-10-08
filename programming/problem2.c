// "String Concatenation!"
/*
 John wanted to concatenate two strings in C as a part of his school assignment. But, he isn't being able to do so.
 
 He requires your help to write a program in C that takes two strings from the user, and then returns an output concatenating those two strings.
 
 Can you help him? The first person to write a program for his problem and create a PR for it would have his/her PR merged.
*/

// Write your program here!
// this program concatenates two string in c without the use of strcat

#include <stdio.h>

void main(void){
 
    // variable declaration
    char string_one[100], string_two[100], accumulated_string[200];
    int i, j, length = 0;

    // asking the user for the two strings
    printf("String one: ");
        scanf("%s", &string_one);
    printf("String two: ");
        scanf("%s", &string_two);

    // finding the "actual" length of string_one
    for(i = 0 ; i<100 ; i++){
        accumulated_string[i] = string_one[i]; // copying "string_one" in "accumulated_string"
        if(string_one[i] == '\0')
            break;
        length++;
    }

    // appending the string_two with string_one, after the last character of string_one flagged by "length"
    for(j = 0 ; j<100 ; j++){
        accumulated_string[length] = string_two[j];
        if(string_two[j] == '\0')
            break;
        length++;
    }

    printf("\nThe concatenated string is %s", accumulated_string);
}
