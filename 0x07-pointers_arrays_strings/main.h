#ifndef main_h
#define main_h

void set_string(char **s, char *to);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
void print_diagsums(int *a, int size);
void print_chessboard(char (*a)[8]);
int _putchar(char c);
char *_strstr(char *haystack, char *needle);
unsigned int _strspn(char *s, char *accept);

#endif
