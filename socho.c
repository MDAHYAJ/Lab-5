#include <stdio.h>

#define BUILD_ENTRY  1 
#define LAB_ACCESS   2 
#define SERVER_ROOM  4  

int main() {
    int role, access;

    // Ask user for input
    printf("Enter role (1=Admin, 2=Manager, 3=Staff): ");
    scanf("%d", &role);
    
    printf("Enter access level integer: ");
    scanf("%d", &access);
    switch (role) {
        case 1: printf("\nWelcome, Admin!\n"); break;
        case 2: printf("\nWelcome, Manager!\n"); break;
        case 3: printf("\nWelcome, Staff!\n"); break;
        default: printf("\nInvalid role!\n"); return 1;
    }
    printf("Permissions:\n");
    if (access & BUILD_ENTRY) {
        printf("- Entry to Building\n");
    }
    if (access & LAB_ACCESS) {
        printf("- Access to Lab\n");
    }
    if (access & SERVER_ROOM) {
        printf("- Access to Server Room\n");
    }
    if ((access & LAB_ACCESS) && (access & SERVER_ROOM)) {
        printf("Notice: You have high-level security clearance.\n");
    }

    return 0;
}