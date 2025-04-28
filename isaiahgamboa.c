#include <stdio.h> //include stdio.h
#include <stdlib.h> // need memory allocation 
#include <string.h> // string operations

#define max_instructions 100	//setting max instructions to 100
#define max_length 100			//setting max length to 100
#define stages 5				// IF, ID, EX, MEM, WB

//Need global variables
int num_instruction = 0; //need to classify # of instructions
char instructions[max_instructions][max_length]; //instructions array

void enter_instructions() { //need enter_instrucions method
	printf("Enter the number of instructions: ");
		scanf("%d)", &num_instruction); //scans user input. for organization added ')' at the end of instr. counter
			getchar(); //getchar gets rid of newline scanf produces

	for (int i = 0; i < num_instruction; i++) {// using int i for num_intructions for organization
		printf("%d ", i + 1);
			fgets(instructions[i], max_length, stdin);
			instructions[i][strcspn(instructions[i], "\n")] = 0;//
	}
}

void print_pipeline_table() { //need print_pipeline_table
	int cycle_buffer = 0;  //need a buffer

	for (int i = 0; i < num_instruction; i++) {
		for (int j = 0; j < cycle_buffer; j++)
			printf("     ");	//line 30 and 31 is the table
		printf("| IF | ID | EX | MEM| WB | \n");
		cycle_buffer++;
	}
}

void total_cycle_count() { //need total_cycle_count
	int cylce_counter = num_instruction + 4; // can use a new int to == to num_instructions to count # of instructions
		printf("The total cycle count for the program is: %d\n", cylce_counter);

}


int main(){			// need a table for users to interact with			
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

