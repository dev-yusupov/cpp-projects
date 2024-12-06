#include <stdio.h>
#include <stdbool.h>

// Define macro MAXIMUM_GROUPS to 4 as maximum number of groups a user can be member of
#define MAXIMUM_GROUPS 4

// Declare a typedef for string, an array of 128 characters
typedef char string[128];

// Declare Groups enum
typedef enum {
    root_user = 0,
    system_users = 201,
    operator_users = 1001,
    observer_users = 2000,
} Groups;

// Declare struct with user_t typedef which represents a user
typedef struct {
    string name;                    // array of characters which hold name of a user, maximum 128 characters
    int age;                        // integer to store user's age
    int ID;                         // integer to store user's ID in the system
    Groups groups[MAXIMUM_GROUPS];  // Array of groups to store user's access membership
    user_t* nextUser;               // A pointer with user_t type as a reference to the next user in the system
    bool canBedeleted;
} user_t;
