




int main(){
	int choice;
    do {
        printf("\nPerformance assessment:\n");
        printf("-----------------------\n");
        printf("1) Enter parameters\n");
        printf("2) Print table of input parameters\n");
        printf("3) Print table of performance\n");
        printf("4) Quit\n");
        printf("Enter selection: ");
        scanf("%d", &choice);
        
        //fill in the different cases with 
        switch (choice) {
            case 1:
                enter_params();
                break;
            case 2:
                print_input_table();
                break;
            case 3:
                print_performance_table();
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

