#include <stdio.h>

int main(){
    int result;                                 //Integer Decleration
    result = (2+7) * 9 / 3;                     //Integer operation

    //printf("The result is %d\n");         //This is incorrect because this printf expects a matching int argument which is not given.

    printf("The result is %d\n", result);   //This is the corrected solution.
    return 0;
}
