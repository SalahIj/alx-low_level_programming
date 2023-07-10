#ifndef main_h
#define main_h

int _putchar(char c);
char **strtow(char *str);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
int **alloc_grid(int width, int height);
char *_strdup(char *str);
char *create_array(unsigned int size, char c);
char *str_concat(char *s1, char *s2);

#endif
