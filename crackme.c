#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int CheckDebugger(){
    return IsDebuggerPresent();
}


int main(){
    if (CheckDebugger()){
        printf("Stop using debugger");
        return 1;
    }

    char password[64];
    scanf("%63s" , password);
    if (strlen(password) > 16){
        printf("Try something smaller!");
        return 1;
    }
    int sum = 0;
    for (int i = 0; i < strlen(password); i++){
        int a = password[i];
        sum = sum + a;
    }
    if (sum != 1240){
        printf("Wrong Password!");
    }
    else {
        printf("Congrats!");
    }



    return 0;
}