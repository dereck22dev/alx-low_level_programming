#ifndef _MAIN_H_
#define _MAIN_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t read_textfile(const char *fname, size_t txt);
int create_file(const char *filename, char *content);
int append_text_to_file(const char *fname, char *txt);

#endif
