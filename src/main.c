#include "../includes/computor.h"


int main(int ac, char *av[])
{
    char	*equation;

    if (ac > 2)
        help(av[0]);
    else if (ac == 2)
    {
        equation = av[1];
        printf("the equation from args is : [%s] \n" , equation);
    }
    else
    {
        equation = read_stdin_equation();
        if (!equation)
		{
			fprintf(stderr, "Error: could not read equation from stdin.\n");
			return (1);
		}
        printf("the equation from stdin is : [%s] \n" , equation);
    }

    int ret = parse_equation(equation);

    return 0;
}