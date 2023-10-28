void _puts_recursion(char *s)
{
    if (*s == '\0')  // Base case: end of the string
    {
        _putchar('\n');  // Print a newline character
        return;  // Exit the function
    }

    _putchar(*s);  // Print the current character
    _puts_recursion(s + 1);  // Make a recursive call with the next character
}
