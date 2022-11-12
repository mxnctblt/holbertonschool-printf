# C - project _printf()

**_printf()** - formatted output conversion

```
#include "main.h"

int _printf(const char *format, ...);
```

## Description

The functions **_printf()** write output to stdout, the standard output stream.
This function write the output under the control of a format string that specifies how subsequent arguments are converted for output.

## Format of the format string

The format string is a character string, beginning and ending in its initial shift state, if any.  The format string is composed of zero or more directives: ordinary characters (not %), which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments.  Each conversion specification is introduced by the character %, and ends with a conversion specifier.

## Conversion specifiers

A character that specifies the type of conversion to be applied. The conversion specifiers handled by **_printf()** and their meaning are:
-  **c**: The argument passed for specifier "%c" is of type int. "%c" prints a single character.
-  **s**: The argument passed for specifier "%s" is a string of type char *. "%s" prints the string pointed to by the char *.
-  **%**: No argument is passed for specifier "%%", it will only print a percent sign "%".
-  **d**: The argument passed for specifier "%d" is of type int. "%d" print a decimal integer (assumes base 10).
-  **i**: The argument passed for specifier "%i" is of type int. "%i" print a decimal integer (detects the base automatically).

## Return Value

Upon successful return, the **_printf()** function return the number of characters printed (excluding the null byte used to end output to strings).
If an output error is encountered, a negative value is returned.

## Other functions

### int _putchar(char c);
This function writes the character c to stdout.

### int (*printf_function(char c))(va_list list);
This function matches the specifier to the right function.

### int printf_char(va_list list);
This function is called when "%c" and it will print a single character.

### int printf_str(va_list list);
This function is called when "%s" and it will print a string.

### int printf_percent(va_list list);
This function is called when "%%" and it will print a single '%'.

### int printf_d_i(va_list list);
This function is called when "%d" or "%i" and it will print a decimal integer.

### int gestion_i(int arg);
This function help printf_d_i to make the difference between %d and %i who don't print on the same base.

## Examples

**#include "main.h"**


```
_printf("Character:[%c]\n", 'H');
```
the output will be: Character:[H]

```
_printf("String:[%s]\n", "I am a string !");
```
the output will be: String:[I am a string !]

```
_printf("Percent:[%%]\n");
```
the output will be: Percent:[%]

## Flowchart

![alt text](https://slack-imgs.com/?c=1&o1=ro&url=https%3A%2F%2Fwww.figma.com%2Ffile%2FlJ7M94lHCArfuiAzSlbc1W%2Fthumbnail%3Fver%3Dthumbnails%2F73a5d2c8-6cf2-46c1-94e1-52d6466f0375)

## Authors

Antoine Jacob & Maxence Thibault