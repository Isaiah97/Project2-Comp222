#include <stdio.h>


void enter_instructions() {


}

void print_pipeline_table() {

}

void total_cycle_count() {

}


int main(){							
	int choice;
    do {
        printf("\nPerformance assessment:\n");
        printf("-----------------------\n");
        printf("1) Enter instructions\n");
        printf("2) Print pipeline table\n");
        printf("3) Print total count of cycles\n");
        printf("4) Quit\n");
        printf("Enter selection: ");
        scanf("%d", &choice);
        
        //fill in the different cases with 
        switch (choice) {
            case 1:
                enter_instructions();
                break;
            case 2:
                print_pipeline_table();
                break;
            case 3:
                total_cycle_count();
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4); //make sure it only remains 4 options
    
    return 0;
}

