This Directory contains a library that houses the following functions

These are function prototypes for various standard C library functions. Here is a brief explanation of each function:

int _putchar(char c);: This function writes a single character c to the standard output stream (usually the console). It returns the character written on success, or -1 on failure.

int _islower(int c);: This function returns 1 if the given character c is a lowercase letter, and 0 otherwise.

int _isalpha(int c);: This function returns 1 if the given character c is an alphabetic letter (either uppercase or lowercase), and 0 otherwise.

int _abs(int n);: This function returns the absolute value of the integer n.

int _isupper(int c);: This function returns 1 if the given character c is an uppercase letter, and 0 otherwise.

int _isdigit(int c);: This function returns 1 if the given character c is a digit (0-9), and 0 otherwise.

int _strlen(char *s);: This function returns the length of the null-terminated string s.

void _puts(char *s);: This function writes the null-terminated string s to the standard output stream, followed by a newline character.

char *_strcpy(char *dest, char *src);: This function copies the null-terminated string src to the null-terminated string dest. It returns a pointer to the destination string.

int _atoi(char *s);: This function converts the null-terminated string s to an integer and returns the result.

char *_strcat(char *dest, char *src);: This function appends the null-terminated string src to the null-terminated string dest, overwriting the null terminator at the end of dest. It returns a pointer to the destination string.

char *_strncat(char *dest, char *src, int n);: This function appends at most n characters from the null-terminated string src to the null-terminated string dest, overwriting the null terminator at the end of dest. It returns a pointer to the destination string.

char *_strncpy(char *dest, char *src, int n);: This function copies at most n characters from the null-terminated string src to the null-terminated string dest. If src is shorter than n characters, null characters are used to pad the rest of dest. It returns a pointer to the destination string.

int _strcmp(char *s1, char *s2);: This function compares the null-terminated strings s1 and s2. It returns an integer less than, equal to, or greater than zero, depending on whether s1 is lexicographically less than, equal to, or greater than s2.

char *_memset(char *s, char b, unsigned int n);: This function sets the first n bytes of the memory pointed to by s to the byte b. It returns a pointer to s.

char *_memcpy(char *dest, char *src, unsigned int n);: This function copies n bytes from the memory pointed to by src to the memory pointed to by dest. It returns a pointer to dest.

char *_strchr(char *s, char c);: This function returns a pointer to the first occurrence of the character c in the null-terminated

