#include <stdio.h>
int main(){
    int staff;
    int access;
    printf("Enter the number of staff: ");
    scanf("%d", &staff);
    switch(staff){
        case 1:
            printf("Staff:Admin\n");
            break;
        case 2:
            printf("Staff:Manager\n");
            break;
        case 3:
            printf("Staff:Employee\n");
            break;
        default:
            printf("Invalid staff number\n");
            return 1;
    }
    printf("Grant access to? ");
    scanf("%d", &access);
    switch(access){
        case 1:
            printf("Access granted to building %d\n", access);
            break;
        case 2:
            printf("Access granted to lab %d\n", access);
            break;
        case 3:
            printf("Access granted to server room %d\n", access);
            break;    
        default:
            printf("Access denied\n");
    }
    return 0;
}