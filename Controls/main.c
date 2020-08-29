#include <stdio.h>
#include <time.h>
#include "MotorController.h"

void write(char CAN_ID[], char CAN_MESSAGE[]);
int main() {
    char num[1] = "A";
    clock_t s = clock();
    while(1)
    {

        if(clock() > s + (CLOCKS_PER_SEC))
        {
            s = clock();
            write(num,"A");
            num[0]++;
        }


    }
    return 0;
}
