#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv) {
    char opt = 0;

    while ((opt = getopt(argc, argv, "t:")) != -1) {
        switch (opt) {
            case 't': 
                if (NULL == optarg) {
                    exit(EXIT_FAILURE);
                }
                
                printf("%c\n", opt);
                printf("%s\n", optarg);

                break;
            default:
                    break;
        }
    }

    return EXIT_SUCCESS;
}
