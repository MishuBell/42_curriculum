// Headerfile - Declarations

// #ifndef #define and #endif 
// This is a include guard. It is to prevent multiple inclusions of the same header during file compilation.
//TODO for later tho.

#ifndef LIBFT_H
#define LIBFT_H

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isprint(int c);
int ft_strlen(char *s);


int display_values(void);

#endif