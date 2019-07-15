#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]) {
   /* argv++; /* argv[0] is the program name */
    int vals[argc-1];
    for(int i = 1;i < argc;i = i + 1) {
        vals[i] = atoi(argv[i]);
        printf("%d", vals[i]);
    }
    return 0;
}
