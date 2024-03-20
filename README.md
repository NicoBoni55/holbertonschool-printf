<center>

# holbertonschool-printf
</center>

<p align="center">
  <img src="https://miro.medium.com/v2/resize:fit:748/1*AfH44efHUkGp-amwdiD9zg.png" alt="printf">
</p>

# What is printf?

 The printf function (which derives its name from **print formatted**) prints a message to the screen using a **format string** that includes instructions for mixing multiple strings into the final string to be displayed on the screen

# Format

| Type |   | Description                           |
|------|---|----------------                       |
| %c   |   | Prints the corresponding ASCII character|
| %s   |   | Prints character string (ending in '\0') |
| %%   |   | Prints the % symbol |
| %d   |   | Prints a signed decimal integer |
| %i   |   | Prints an integer |

## Use
code will be compiled this way: 
```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
## Project functions

The functions used to copiled _printf are all included in main.h :

- int (*tipo_valido(char c))(va_list);
- int printINT(int numero);
- int _write(char s);
- int convert_char(va_list para);
- int convert_string(va_list para);
- int convert_int(va_list para);
- int _printf(const char *format, ...);

## Author
*Nicolas Bonilla*\
Holberton School, Cohort 23

*Wilson Antognazza*\
Holberton School, Cohort 23
