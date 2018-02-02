#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft/libft.h"

typedef struct s_specifiers
{
    char    *flags;
    int     width;
    int     precision;
    char    *length;
    char    specifier;
}               t_specifiers;

//ft_printf
int     ft_printf(const char *format, ...);//1
char    *manager(const char *format, va_list ap);//2
void    fill_struct_info(const char *format, t_specifiers *five_strings);//3

//fill funcs
void    add_to_end_of_string(char **name, char character);
char    is_flag(const char *format);
char    is_length(const char *format);
char    is_specifier(const char *format);
char    *move_till_end(const char *format);//checks

void    fill_flags(const char *format, t_specifiers *five_strings);//3-1
void    fill_length(const char *format, t_specifiers *five_strings);//3-2
void    fill_precision(const char *format, t_specifiers *five_strings);//3-3
void    fill_specifiers(const char *format, t_specifiers *five_strings);//3-4
void    fill_width(const char *format, t_specifiers *five_strings);//3-5

//convert-flags
void    convert_flags(char *result, t_specifiers *five_strings);
void    hash(char **result, t_specifiers *five_strings);
void    space(char character, char **result);

//convert-specifiers
int    if_whatever(t_specifiers *five_strings);
int    if_percent(t_specifiers *five_strings);
int    if_signed(t_specifiers *five_strings);
int    if_unsigned(t_specifiers *five_strings);
int    if_wint_t(t_specifiers *five_strings);
int    if_char_p(t_specifiers *five_strings);
int    if_char(t_specifiers *five_strings);
int    if_wchar_t_p(t_specifiers *five_strings);

char    *jump_table(const char *format, t_specifiers *five_strings, va_list ap);

char    *get_whatever(const char *format);
char    *get_percent(t_specifiers *five_strings);
char    *get_signed(t_specifiers *five_strings, va_list ap);
char    *get_unsigned(t_specifiers *five_strings, va_list ap);
char    *get_wint_t(t_specifiers *five_strings, va_list ap);
char    *get_char(t_specifiers *five_strings, va_list ap);
char    *get_char_p(t_specifiers *five_strings, va_list ap);
char    *get_wchar_t_p(t_specifiers *five_strings, va_list ap);

//convert-length

void    convert_signed_length(intmax_t *number, t_specifiers *five_strings);
void	convert_unsigned_length(uintmax_t *number, t_specifiers *five_strings);

//convert-precision

//convert-width


#endif