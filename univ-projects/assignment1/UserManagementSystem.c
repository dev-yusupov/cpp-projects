#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <errno.h>

#include "UserManagementSystem.h"

user_t* init() {
    user_t* new_user = (user_t*)malloc(sizeof(user_t));       // Allocate a memory for a new user

    snprintf(new_user->name, sizeof(new_user->name), "root"); 
    new_user->age = 33;
    new_user->groups[0] = root_user;
    new_user->groups[1] = system_users;
    new_user->groups[2] = operator_users;
    new_user->groups[3] = observer_users;
    new_user->nextUser = NULL;
    new_user->canBedeleted = false; // Setting can be deleted to false as ensuring not to be deleted


    return new_user;
}

// Used recursion technique to traverse in the linked list of users
int count_users(user_t* root) {
    if (root == NULL) {
        return 0;
    }

    int count = 1 + count_users(root->nextUser);

    return count;
}

void print_user(user_t* root, int ID) {
    if (root->ID == ID) {
        printf("Name: %s \n Age: %d \n ID: %d", root->name, root->age, root->ID);

        int length = sizeof(root->groups) / sizeof(Groups);

        for (int i = 0; i < length; i++) {
            printf("User group: %d", root->groups[i]);
        }
    }

    return print_user(root->nextUser, ID);
}

user_t* create_user(user_t* root, string name, int age, int ID, Groups groups[], int lengthOfGroups) {
    if (root->nextUser != NULL) {
        return create_user(root->nextUser, name, age, ID, groups, lengthOfGroups);
    }

    for (int i = 0; i < lengthOfGroups; i++) {
        if (groups[i] == root_user) {
            printf("Error: A user cannot be assigned to the root_user group.\n");
            return NULL;
        }
    }

    user_t* new_user = (user_t*)malloc(sizeof(user_t)); // Allocate a new memory in heap

    snprintf(new_user->name, sizeof(new_user->name), name);
    new_user->age = age;
    new_user->ID = ID;
    new_user->groups[lengthOfGroups] = groups;
    new_user->canBedeleted = true;
    new_user->nextUser = NULL;
    
    root->nextUser = new_user;

    return new_user;
}

user_t* modify_user(user_t* root, int ID, string newName, int newAge, Groups newGroups[], int newLengthOfGroups) {
    while (root != NULL) {
        if (root->ID == ID) {
            snprintf(root->name, sizeof(root->name), "%s", newName);
            root->age = newAge;

            int length = (newLengthOfGroups < sizeof(root->groups) / sizeof(Groups)) ? newLengthOfGroups : sizeof(root->groups) / sizeof(Groups);

            for (int i = 0; i < length; i++) {
                if (newGroups[i] != root_user) {
                    root->groups[i] = newGroups[i];
                }
            }

            printf("User updated successfully!\n");
            return;
        }

        root = root->nextUser;
    }

    printf("Error: User with ID %d not found.\n", ID);
}

