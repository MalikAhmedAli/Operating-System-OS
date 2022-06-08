#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    char pMsg[200];
    printf("P2:    ");
    scanf("%[^\n]%*c", pMsg);
    printf("P2 Says:    %s\n", pMsg);
    char *args[] = {"./pipeAssnmtq2", NULL};
    execvp(args[0], args);
    return 0;
}