#ifndef COMPUTOR_H
#define COMPUTOR_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>



void    help(char *argv);
char	*read_stdin_equation(void);
int     parse_equation(char *equation);

#endif 