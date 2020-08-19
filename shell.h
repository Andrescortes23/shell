#ifndef _SHELL_
#define _SHELL_

/* MACROS */
#define PROMPT "$ "

/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <unistd.h>
#include <signal.h>



/* Prototypes */
char *_getline();
char **token(char *line);
int excecute(char **s, char **env);
int _strlen(char *s);
char *_strdup(char *s);
int _strncmp(char *s, const char *s1, int n);
int _strcmp(char *s, char *s1);
char *_strcat(char *dest, char *src);
char *_which(char *s, char **env);
char **tokenpath(char *line);
char *_getenv(const char *path, char **env);
void NewLine(int sign);
char *_strcpy(char *dest, char *src);




#endif
