#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024
#define permission S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);

#endif
