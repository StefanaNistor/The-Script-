#include "Commands.h"
#include <iostream>
#include <stdio.h>
#include <string.h>  
#include <malloc.h>

void Commands::myStrtok(std::string input) {
    std::string copy = input;
    for (int wordCnt = 0; wordCnt < noWords; wordCnt++)
    {
        size_t delim = copy.find(" "); 
        token[wordCnt] = copy.substr(0, delim); 
        copy.erase(0, token[wordCnt].length() + 1);     
    }
}

bool Commands::strCompare(std::string string1, std::string string2)
{
    int i;
    for (i = 0; string1[i] && string2[i]; i++) {
        if (string1[i] == string2[i])
            continue;
        else
            break;
    }
    if (string1[i] == string2[i])
    {
        return 0;
    }
 
    return 1;
}

