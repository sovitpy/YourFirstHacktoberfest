// "String Concatenation!"
/*
 John wanted to concatenate two strings in C as a part of his school assignment. But, he isn't being able to do so.
 
 He requires your help to write a program in C that takes two strings from the user, and then returns an output concatenating those two strings.
 
 Can you help him? The first person to write a program for his problem and create a PR for it would have his/her PR merged.
*/

// Write your program here!
#include <stdio.h>
#include <string.h>
int main()
{
  char a[1000], b[1000];

  printf("Enter the first string\n");
  gets(a);

  printf("Enter the second string\n");
  gets(b);

  strcat(a, b);

  printf(a);

  return 0;
}
