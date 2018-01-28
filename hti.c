/**
 * get_string function designed to simplify the process of getting string from user
 * made by: GeekNabil
 * arguments: takes no arguments
 * return value: return pointer to allocated memory size
 * note: free not called here so you should free allocated memory inside your program
 */
#include <stdio.h>
#include <stdlib.h>

char* get_string(void)
{
    // buffer fixed size problem
    char* x = malloc(30 * sizeof(char));

    // put read character in heap storage and increment the pointer then repeat
    int i;
    for (i = 0; (*(x + i) = getchar()) != '\n'; i++)
        ;
    // put null terminator at the end of readed characters
    *(x + i) = '\0';


    // return that pointer
    return x;
}


/**
 * get_int function designed to simplify getting int from user 
 * made by: GeekNabil
 * arguments: takes no arguments
 * return value: return int value
 */
int get_int(void) 
{
	// get int from user using scanf	
	int n;
	scanf("%d", &n);
	
	// return that int
	return n;
}



/**
 * get_char function designed to simplify getting char from user
 * designed by: GeekNabil
 * arguments: takes no arguments
 * return value: return char value casted to an int
 */
int get_char(void)
{
	
	int c;
	// prevent reading newline character
	getchar();
	
	// return first inputted character
	while ((c = getchar()) != '\n')
		return c;	
	
		
}
