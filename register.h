#pragma once

#include <stdio.h>
#include <sys/stat.h> //int chmod(const char *pathname, mode_t mode);
#include <dirent.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <sys/times.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include "utils.h"
#include "signal.h"

enum event{PROC_CREAT, PROC_EXIT, SIGNAL_RECV, SIGNAL_SENT, FILE_MODF};

extern struct tms *buf;
extern clock_t start,mid,end;
extern long ticks;
<<<<<<< HEAD
=======

>>>>>>> c98347a9ec594c00a2cd45edccd989ec1e386d8a

void env_path(char *envp[]);

void mke_register_wout_signal(enum event event,  pid_t pid, char *envp[], char* argv[], int argc, struct stat after_buf,struct stat before_buf);

void mke_register_w_signal(enum event event,  pid_t pid, int signo);

void init_file(char *envp[]);
