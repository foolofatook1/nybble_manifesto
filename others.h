#include <stdio.h>
#include <stdlib.h>
/* can't decide if the following should be part of manifesto.c or not...
#define COMPUTER_SCIENCE 1
#define ART 1
#define THERE_EXISTS void
#define A_QUESTION main
*/
#define ATTEMPT_AN_ANSWER {\
    FILE *fptr;\
    char* filename = ".manifesto.txt\0";\
    char c;\
    fptr = fopen(filename, "r");\
    if(fptr == NULL) exit(0);\
    c = fgetc(fptr);\
    while(c != EOF) {\
        printf("%c", c);\
        c = fgetc(fptr);\
    }\
    fclose(fptr);\
}
