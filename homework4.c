#include <stdio.h>

int main() {
    int ch;

    printf("Введите 10 символов по одному:\n");

    // Цикл for для 10 символов
    for (int i = 0; i < 10; i++) {
        // Считываем символ
        ch = getchar();

        // Выводим в нужном формате
        printf("%d. '%c'\n", i, ch);
    }

    return 0;
}
