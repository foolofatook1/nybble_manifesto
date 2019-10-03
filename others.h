#include <stdio.h>
#include <stdlib.h>
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
