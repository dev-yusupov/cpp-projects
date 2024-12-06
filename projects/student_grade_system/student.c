#include <stdio.h>
#include <stdlib.h>

#include "student.h"
#include "utils/utils.h"

// Initialize a root student as access point to other students
void init(student_t* root_student, string name, int ID, int grades[], int length) {
    snprintf(root_student->name, sizeof(root_student->name), "%s", name);
    root_student->ID = ID;
    root_student->next = NULL;
    root_student->num_grades = length;
    root_student->capacity = 5;
    root_student->grades = (int*)malloc(root_student->capacity * sizeof(int));
    for (int i = 0; i < length; i++) {
        root_student->grades[i] = grades[i];
    }
}

// List students
void list_students(student_t* root)
{
    student_t* current = root;
    printf("Students:\n");
    printf("---------\n");
    while (current != NULL)
    {
        printf("Name: %s\n", current->name); // Add newline after each student's name
        printf("ID: %d\n", current->ID); // Add newline after each student's ID
        printf("Average Grade: %.2f\n", average_grade(current->grades, current->num_grades)); // Add newline after each student's average grade
        printf("\n");
        current = current->next;
    }
}

// Add student
student_t* add_student(student_t* root, string name, int ID)
{
    student_t* current = root;

    while (current->next != NULL)
    {
        current = current->next;
    }

    student_t* previous = current;
    student_t* new_student = (student_t*)malloc(sizeof(student_t));

    snprintf(new_student->name, sizeof(current->name), "%s", name);
    new_student->ID = ID;
    new_student->next = NULL;
    new_student->num_grades = 0;
    new_student->capacity = 5;
    new_student->grades = (int*)malloc(current->capacity * sizeof(int));

    previous->next = new_student;

    return current;
}