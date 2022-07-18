#ifndef SERVICE_H
# define SERVICE_H

# include <stdio.h>
# include <string.h>

# define INV_OPT -1
# define NO_OPT 0
# define INSTALL 1
# define START 2
# define STOP 3
# define DELETE 4

int get_option(int argc, char **argv);

#endif