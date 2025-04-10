Objective:
Write C code to calculate the performance of a program with dependent arithmetic instructions
on a 5-stage pipeline architecture. The five stages are: Instruction Fetch (IF), Instruction Decode
(ID), Execution (Ex), Memory access (ME), and Write-Back (WB)
Inputs:
• Number of instructions in the program
• Set of instructions
Outputs:
• A chart of the pipelined stages of the instructions
• The total cycle count for the program
Specification:
The program calculates the output based on choosing from a menu of choices, where each
choice calls the appropriate procedure, where the choices are:
1) Enter instructions
2) Print a chart of the pipelined stages of the instructions
3) Print the total cycle count for the program
4) Quit
What to turn in:
The source code as a single C file named: yourname.c uploaded to Canvas
(http://canvas.csun.edu) by the deadline.
You can use any editor and/or compiler, but make sure your code compiles and executes under
the gcc compiler in the Unix environment.
Example:
$ a.out
Performance assessment:
-----------------------
1) Enter instructions
2) Print a chart of the pipelined stages of the instructions
3) Print the total cycle count for the program
4) Quit
Enter selection: 1
Enter the number of instructions: 4
1) R0 =R1 +R2
2) R3=R1- R4
3) R2=R0+R3
4) R0=R2+R3
Performance assessment:
-----------------------
1) Enter instructions
2) Print a chart of the pipelined stages of the instructions
3) Print the total cycle count for the program
4) Quit
Enter selection: 2
|IF |ID |EX |ME |WB |
|IF |ID |EX |ME |WB |
|IF |ID |EX |ME |WB |
|IF |ID |EX |ME |WB |
Performance assessment:
-----------------------
1) Enter instructions
2) Print a chart of the pipelined stages of the instructions
3) Print the total cycle count for the program
4) Quit
Enter selection: 3
The total cycle count for the program is 8
Performance assessment:
-----------------------
1) Enter instructions
2) Print a chart of the pipelined stages of the instructions
3) Print the total cycle count for the program
4) Quit
Enter selection: 4
