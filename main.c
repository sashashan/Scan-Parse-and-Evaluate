
#include <stdlib.h>
#include <stdio.h>
#include "reader.h"
#include "scanner.h"
#include "parser.h"

int main (int argc, char *argv[]) {
    FILE *fp;
    
    if (argc < 2) {
        printf("Usage: ./format infile\n");
        exit(1);
    }
    
    fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("Error: infile.txt does not exist.\n");
        exit(1);
    }
  
    initialize_reader(fp);
    
    //Parses and Evaluates
    parse();
    
    finalize_reader();
    
    exit(0);
}
