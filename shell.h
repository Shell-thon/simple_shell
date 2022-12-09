#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#define BUFFER_SIZE 256
#define ENV_SEPERATOR "="
#define ESCAPE_SEPERATOR "#"
#define COMMAND_SEPERATOR ";\n"
#define SEPERATORS " \n"
#define PROMPT "$ "

extern char **environ;

/**
 * struct environment_s - environment variable
 *
 * @name: environment name
 * @value: environment value
 * @next: points to the next node
 */
typedef struct environment_s
{
  char *name; /* ex: PATH */
  char *value; /*ex: /bin:/usr/bin */
  char *global; /* PATH=/bin:/usr/bin */
  struct environment_s *next;
} environment_t;

/**
 * struct appData_s -data variable\
 *
 * @arguments: argument's array
 * @buffer: buffer
 * @command: command name
*/

typedef struct appData_s
{
  char **arguments;
  char *buffer;
  char *commandName;
  char **commandList;
  char **history;
  char *programName;
  environment_t *env;
} appData_t;

/**
 * struct errorMessage_s - An structure for each error message
 * @ecode: error code.
 * @msg: pointer to error message.
 * @size: error message length.
 */
typedef struct errorMessage_
{
  
}
