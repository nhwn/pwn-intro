#include <stdio.h>
#include <stdlib.h>

void win() {
    execve("/bin/sh", NULL, NULL);
}

void vuln() {
    char name[16];
    puts("what's your name?");
    gets(name);
    printf("hi %s!\n", name);
}

int main() {
    vuln();
}
