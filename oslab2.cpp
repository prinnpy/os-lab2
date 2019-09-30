//Name: Prinn Prinyanut
//Due: Oct 13, 2019
//Class: CSCI 3453

#include <iostream>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/utsname.h>
#include <fcntl.h>
using namespace std;

//main
int main() {
    string userCommand = ""; //var to store command
    while(true){
        cout << "\nTo exit the shell type: 'exit'\n";
        cout << "myshell> ";
        getline(cin, userCommand); //store user inputs
        if (userCommand == "exit") { //if command read 'exit'
            cout << "Exiting shell...\n";
            exit(0); //exit
        } else {
            const char *userCommandPtr = userCommand.c_str();
            system(userCommandPtr); //compute system command from user inputs
        }
    }
}
