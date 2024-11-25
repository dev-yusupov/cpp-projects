#include <stdio.h>

struct Student {
    char id[10];
    double average;
    unsigned short int age;
};

typedef struct Student student_t;

int main() {
    student_t studets[5] = {
        {"123456", 8.5, 20},
        {"654321", 7.5, 21},
        {"111111", 9.0, 19},
        {"222222", 6.5, 22},
        {"333333", 5.5, 23}
    };

    student_t topStudent = studets[0];

    for (int i = 0; i < 5; i++) {
        if (studets[i].average > topStudent.average) {
            topStudent = studets[i];
        }
    }

    printf("Top student: %s\n", topStudent.id);
}