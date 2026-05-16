#ifndef MAIN_HPP
#define MAIN_HPP

// Find the sub string in the original string

#include <iostream>
#include <cstring>
using namespace std;

int finduserstring(char[], int, char[], int);

int finduserstring(char cstr[], int cstrlen, char userstr[], int userlen)
{
    // TODO: scan cstr for the first occurrence of userstr, return its starting
    for (int i=0;i<=cstrlen-userlen;i++){
        bool findString = true;
        
        for (int j=0;j<userlen;j++){
            if (cstr[i+j] != userstr[j]){
                findString = false;
                break;
            }
        }
        if (findString == true)
            return i;
    }
    return -1;
}

#endif
