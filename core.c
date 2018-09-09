//
//  core.c
//  Week 4 
//
//  Created by Ashley Coleman on 7/5/18.
//  Copyright © 2018 Ashley Coleman. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#include "core.h"

#define MAX_NAME_LENGHT 20

// This function should write the name of the 
// "highest scorer" into buffer. If a value is
// written into the buffer then TRUE should be return.
// If an error occurs or a value isn't written into 
// butter then FALSE should be returned
//
// i.e. if the file has the following contents
// Pam 10
// Jim 50
// Dwight 100
// Then "Dwight" should be written into buffer
//
// Hint:
//     Remember to check for NULL
//     Use the MAX_NAME_LENGHT constant defined above
//     You will need to call fscanf to read from the file
//
int highest_scorer(char * buffer, FILE * stream) {
    return FALSE;
}

// This function should write name and score into
// the file. The function should return TRUE if the
// score was written. It should return false if there
// was ana error.
//
// i.e. if the file has the contents
// Pam 10
// Dwight 50
//
// and add_score("Jim", 100, fp) is called then the file
// will become
//
// Pam 10
// Dwight 50
// Jim 100
//
// Hint:
//     Remeber to check for NULL
//     You need to match the format exactly or the reading from the file will break
//     You will need to call fprintf to write to the file.
int add_score(char * name, int score, FILE * stream) {
    return FALSE;
}


// This function is the user interaction function. It should handle a few things.
// The last slide in lecture 4 gives more details on what should be done here
//
// Overview: 
//     1. Take as a cli argument the name of the file
//         1.1 Error if no name is provided
//     2. Ask the user if they want the highest score or to add a score
//         2.1 if highest score then open the file for reading and print the result of highest_scorer()
//         2.2 if add score then open the file for appending and and add the score using add_score()
//         2.3 if anything else is entered print and error and exit
//     3. Make sure to close the file when you are done with it 
int core_main(int argc, const char * argv[]) {
    printf("No filename provided\n");
    return 1;
}

