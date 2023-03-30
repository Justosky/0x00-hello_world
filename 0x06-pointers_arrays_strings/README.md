I will try as much I can to explain in details the functions of all programs in this directory.

1. A function that concatenates two strings.
Prototype: char *_strcat(char *dest, char *src);This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the 
end of dest, and then adds a terminating null byte
Returns a pointer to the resulting string dest.

2. A function that concatenates two strings.
Prototype: char *_strncat(char *dest, char *src, int n);
The _strncat function is similar to the _strcat function, except that
it will use at most n bytes from src; and
src does not need to be null-terminated if it contains n or more bytes
Return a pointer to the resulting string dest.

3. A function that copies a string.
Prototype: char *_strncpy(char *dest, char *src, int n);
Your function should work exactly like strncpy.

4. A function that compares two strings.
Prototype: int _strcmp(char *s1, char *s2);
Your function should work exactly like strcmp.

5. A function that reverses the content of an array of integers.
Prototype: void reverse_array(int *a, int n);
Where n is the number of elements of the array.

6. A function that changes all lowercase letters of a string to uppercase.
Prototype: char *string_toupper(char *);

7. A function that capitalizes all words of a string.
Prototype: char *cap_string(char *);
Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), 
{, and }

8. A function that encodes a string into 1337.
Letters a and A should be replaced by 4
Letters e and E should be replaced by 3
Letters o and O should be replaced by 0
Letters t and T should be replaced by 7
Letters l and L should be replaced by 1
Prototype: char *leet(char *);
With only one if statement,
With only two loops,
Without a switch statement,
And no ternary operation used.
