#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void class4q3(void) {
    int count = 0;
    for (int i = 1; i < 40; i++) {
        for (int j = 1; j < 40; j++) {
            for (int m = 1; m < 40; m++) {
                for (int n = 1; n < 40; n++) {
                    if ((i + j + m + n) == 40) {
                        if ((i * 10 + j * 5 + m * 2 + n) == 100)
                            count++;
                    }
                }
            }
        }
    }
    printf("%d", count);
}

void class5q2() {
    char str1[50];
    char str2[50];
    scanf("%s", str1);

    const int len = strlen(str1);
    for (int i = 0; i < len; i++) {
        if (str1[i] != '\0') {
            str2[len - 1 - i] = str1[i];
        } else
            break;
    }
    const int result = strcmp(str1, str2);
    if (result < 0) {
        printf("%d\n", -1);
    } else if (result > 0) {
        printf("%d\n", 1);
    } else {
        printf("%d\n", 0);
    }
}

void class6q2() {
    char *p;
    int n;
    scanf("%d", &n);
    p = (char *) calloc(n, sizeof(char *));
    if (p == NULL) {
        perror("对p分配内存失败\n");
        exit(-1);
    }
    char c;
    scanf("%c", &c);
    fgets(p, n, stdin);
    printf("%s", p);
    free(p);
}

int main(void) {
    class6q2();
    return 0;
}
