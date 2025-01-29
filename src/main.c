/*
Authors: Jyot Shah, Soham and Ashwini
Assignment: Assignment 2 - Linux Utility
Date: 29-01-2025
File: main.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "srecord.h"
#include "assembly.h"
#include "file_io.h"

void processArguments(int argc, char **argv, char *inputFile, char *outputFile, int *isSRecordFormat, int *help);

int main(int argc, char **argv) {
    char inputFile[MAX_FILENAME_LENGTH] = {0};
    char outputFile[MAX_FILENAME_LENGTH] = {0};
    int isSRecordFormat = 0, help = 0;

    processArguments(argc, argv, inputFile, outputFile, &isSRecordFormat, &help);


    return 0;
}