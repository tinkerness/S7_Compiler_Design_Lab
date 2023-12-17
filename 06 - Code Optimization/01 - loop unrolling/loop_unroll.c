#include <stdio.h>
#include <time.h>

void runWithLoop() {
    clock_t t; 
    t = clock(); 
    
    for (int i=0; i<5; i++){
        printf("Hello\n");
    }
    
    t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
    
    printf("the loop took %f seconds to execute \n", time_taken); 
}

void runWithoutLoop() {
    clock_t t; 
    t = clock();
    
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    
    t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
    
    printf("the loop took %f seconds to execute \n", time_taken);
}

int main(void) {
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. loop roll\n");
        printf("2. loop unroll\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                runWithLoop();
                break;
            case 2:
                runWithoutLoop();
                break;
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 3);

    return 0;
}
