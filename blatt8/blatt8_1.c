#include <stdio.h>

unsigned int string_length(char str[]) {
    unsigned int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[] = "Hello World";
    unsigned int length = string_length(str);
    printf("The length of the string is %u\n", length);
}


/*
%c
For character type.

%d
For signed integer type.

%e or %E
For scientific notation of floats.

%f
For float type.

%g or %G
For float type with the current precision.

%i
signed integer

%ld or %li
Long

%lf
Double

%Lf
Long double

%lu
Unsigned int or unsigned long

%lli or %lld
Long long

%llu
Unsigned long long

%o
Octal representation

%p
Pointer

%s
String

%u
Unsigned int

%x or %X
Hexadecimal representation

%n
Prints nothing

%%
Prints % character
*/
