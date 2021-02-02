#include <stdio.h>
#include <stdlib.h>

void usage()
{
    printf("This program takes in a message and repeats it the specified amount.\n");
    printf("Usage: *programName*.exe <message> <count>\n");
    exit(1);
}

int main(int argc, char *argv[])
{
    if (argc < 3 || argc > 3) 
    {
        usage();
    } 
    else 
    {
        printf("Repeating %dx Times...\n", atoi(argv[2]));
        for (int i = 1; i < atoi(argv[2]) + 1; i++)
            printf("%3d  -  %s\n", i, argv[1]);
    }

    return 0;
}