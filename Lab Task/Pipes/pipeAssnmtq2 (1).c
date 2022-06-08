#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    char cMsg[200];
    printf("P1:    ");
    scanf("%[^\n]%*c", cMsg);
    printf("P1 Says:    %s\n", cMsg);
    char *args[] = {"./pipeAssnmtq2ii", NULL};
    execvp(args[0], args);
    return 0;
}