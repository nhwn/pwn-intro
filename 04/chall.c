#include <stdio.h>

void vuln() {
    char buf[256];
    printf("%p\n", &buf);
    gets(buf);
}

int main() {
    vuln();
}
