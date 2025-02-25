# Ft_Printf2
Ft_Printf is the second/third project of the 42 Common Core.
The aim of this project is to recode the printf function from stdio library.
### The printf function :
The function is prototyped as follow :
	`int	ft_printf(const char *, ...)`
#### The function handles the following conversions :
##### Mandatory :
- '%c' : Prints a character.
- '%s' : Prints a string.
- '%p' : Prints a pointer.
- '%d' : Prints a decimal (base 10) number.
- '%i' : Prints an integer in base 10.
- '%u' : Prints an unsigned decimal (base 10) number.
- '%x' : Prints a number in hexadecimal(base 16) lowercase format.
- '%X' : Prints a number in hexadecimal(base 16) uppercase format.
- '%%' : Prints a percent sign.
##### Bonus :
- '.' :
```
An optional precision, in the form of a period ('.') followed by an optional decimal digit string.
Instead of a decimal digit string one may write "*" or "*m$" (for some decimal integer m) to specify that the precision is given in the next argument, or in the m-th argument, respectively, which must be of type int.
If the precision is given as just '.', the precision is taken to be zero.
A negative precision is taken as if the precision were omitted.
This gives the minimum number of digits to appear for d, i, o, u, x, and X conversions, the number of digits to appear after the radix character for a, A, e, E, f, and F conversions, the maximum number of significant digits for g and G conversions, or the maximum number of characters to be printed from a string for s and S conversions.
```
- '#' :
```
The value should be converted to an "alternate form".
For o conversions, the first character of the output string is made zero (by prefixing a 0 if it was not zero already).
For x and X conversions, a nonzero result has the string "0x" (or "0X" for X conversions) prepended to it.
For a, A, e, E, f, F, g, and G conversions, the result will always contain a decimal point, even if no digits follow it (normally, a decimal point appears in the results of those conversions only if a digit follows).
For g and G conversions, trailing zeros are not removed from the result as they would otherwise be.
For m, if errno contains a valid error code, the output of strerrorname_np(errno) is printed; otherwise, the value stored in errno is printed as a decimal number.
For other conversions, the result is undefined.
```
- '0' :
```
The value should be zero padded. 
For d, i, o, u, x, X, a, A, e, E, f, F, g, and G conversions, the converted value is padded on the left with zeros rather than blanks.
If the 0 and - flags both appear, the 0 flag is ignored.
If a precision is given with an integer conversion (d, i, o, u, x, and X), the 0 flag is ignored.
For other conversions, the behavior is undefined.
```
- '-' :
```
The converted value is to be left adjusted on the field boundary.
(The default is right justification.)
The converted value is padded on the right with blanks, rather than on the left with blanks or zeros.
A - overrides a 0 if both are given.
```
- ' ' :
```
(a space) A blank should be left before a positive number (or empty string) produced by a signed conversion.
```
- '+' :
```
A sign (+ or -) should always be placed before a number produced by a signed conversion.
By default, a sign is used only for negative numbers.
A + overrides a space if both are used.
```