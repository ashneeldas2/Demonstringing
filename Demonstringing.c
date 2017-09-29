#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    // strchr(char *s, char c) returns a pointer to the first occurrence of char c in string s. 
    char s1[] = "Hello fellow classmates!";
    char ch = 'f';
    printf("The string after the first occurrence of \"%c\" is \"%s\"\n", ch, strchr(s1, ch)); // should print "fellow classmates!"
    // strstr(char *s1, char *s2) returns a pointer to the first occurrence of s2 in s1. 
    char s2[] = "fellow";
    char s3[] = "goodbye";
    printf("The string after the first occurrence of \"%s\" is \"%s\"\n", s2, strstr(s1, s2)); // should print "fellow classmates!"
    printf("The string after the first occurrence of \"%s\" is \"%s\"\n", s3, strstr(s1, s3)); // should be null
}