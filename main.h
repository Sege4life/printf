#ifndef MAIN_H
#define MAIN_H
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

#include <stdarg.h>

/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */

typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

/**
 * struct flags - structure turnon flags
 * @plus: plus sign
 * @space: space key
 * @hash: hash sign
 */

typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;
int get_flag(char s, flags_t *f);
int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);
int print_u(va_list u);
int print_b(va_list b);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_p(va_list p);
int print_S(va_list S);
int print_r(va_list r);
int print_R(va_list R);

#endif  /* _MAIN_H */
