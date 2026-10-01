#include "../includes/computor.h"


void    help(char *argv)
{
    fprintf(stderr, "Usage: %s \"equation\"\n", argv);
	fprintf(stderr, "   or: %s          (then type an equation on stdin)\n", argv);
	fprintf(stderr, "Example: %s \"5 * X^0 + 4 * X^1 - 9.3 * X^2 = 1 * X^0\"\n", argv);
}



char	*read_stdin_equation(void)
{
	char	*equation;
	char	buf[1024];
	size_t	len;

	if (!fgets(buf, sizeof(buf), stdin))
		return (NULL);
	len = strlen(buf);
	if (len > 0 && buf[len - 1] == '\n')
		buf[len - 1] = '\0';
	equation = malloc(strlen(buf) + 1);
	if (!equation)
		return (NULL);
	strcpy(equation, buf);
	return (equation);
}
