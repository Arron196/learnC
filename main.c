#include <stdio.h>
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

int main(void) {
    class5q2();
    return 0;
}
