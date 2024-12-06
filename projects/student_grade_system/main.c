#include <stdio.h>
#include <stdlib.h>
#include "student.h"

student_t* root_student;

int main() {
    root_student = (student_t*)malloc(sizeof(student_t)); // Allocate memory for root_student
    init(root_student, "John Doe", 1, (int[]){90, 80, 70, 60}, 4); // Initialize root_student with name "John Doe", ID 1, and grades 90, 80, 70, 60

    add_student(root_student, "Jane Doe", 2); // Add student with name "Jane Doe" and ID 2

    list_students(root_student);

    return 0;
}