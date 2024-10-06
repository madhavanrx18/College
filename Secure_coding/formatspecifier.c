#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

// 1. Vulnerable Direct User Input in Format String
void format_string_vuln() {
    char user_input[100];
    printf("Enter a string (vulnerable): ");
    gets(user_input); // Unsafe function; will lead to buffer overflow issues
    printf(user_input); // Vulnerable format string usage
    printf("\n");
}

// 1. Mitigated Direct User Input in Format String
void format_string_safe() {
    char user_input[100];
    printf("Enter a string (mitigated): ");
    fgets(user_input, sizeof(user_input), stdin); // Safe function to limit input size
    printf("%s", user_input); // Proper usage of format string to avoid injection
    printf("\n");
}

// 2. Vulnerable Unrestricted String Copy
void unrestricted_string_copy() {
    char src[100], dest[50];
    printf("Enter a string to copy (vulnerable): ");
    gets(src); // Vulnerable to buffer overflow
    strcpy(dest, src); // Unrestricted string copy
    printf("Copied string: %s\n", dest);
}

// 2. Mitigated Unrestricted String Copy
void restricted_string_copy() {
    char src[100], dest[50];
    printf("Enter a string to copy (mitigated): ");
    fgets(src, sizeof(src), stdin); // Limit input size using fgets
    strncpy(dest, src, sizeof(dest) - 1); // Ensure we don't copy more than the destination can hold
    dest[sizeof(dest) - 1] = '\0'; // Null-terminate to avoid overflow
    printf("Copied string: %s\n", dest);
}

// 3. Vulnerable Modify Variadic Function
void print_variadic(const char *format, ...) {
    va_list args;
    va_start(args, format);

    // Vulnerable variadic function
    vprintf(format, args);

    va_end(args);
}

void modify_variadic_function() {
    char user_input[100];
    printf("Enter a format string (vulnerable): ");
    gets(user_input); // Unsafe user input in format specifier
    print_variadic(user_input); // Passing user input to variadic function
}

// 3. Mitigated Modify Variadic Function
void print_variadic_safe(const char *format, ...) {
    va_list args;
    va_start(args, format);

    // Safe variadic function, ensuring the format string is controlled
    vprintf(format, args);

    va_end(args);
}

void modify_variadic_function_safe() {
    char user_input[100];
    printf("Enter a format string (mitigated): ");
    fgets(user_input, sizeof(user_input), stdin); // Safer way to read input
    print_variadic_safe("%s", user_input); // Controlled format string
}

int main() {
    // Vulnerable functions
    printf("1) Direct User Input in Format String (Vulnerable):\n");
    format_string_vuln();

    printf("\n2) Unrestricted String Copy (Vulnerable):\n");
    unrestricted_string_copy();

    printf("\n3) Modify Variadic Function (Vulnerable):\n");
    modify_variadic_function();

    // Mitigated functions
    printf("\n--- Mitigated Functions ---\n");

    printf("\n1) Direct User Input in Format String (Mitigated):\n");
    format_string_safe();

    printf("\n2) Unrestricted String Copy (Mitigated):\n");
    restricted_string_copy();

    printf("\n3) Modify Variadic Function (Mitigated):\n");
    modify_variadic_function_safe();

    return 0;
}
