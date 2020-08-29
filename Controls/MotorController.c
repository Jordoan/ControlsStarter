#include <stdio.h>
//
// Created by JordanDoan on 8/29/2020.
//

#include "MotorController.h"

void write(char CAN_ID[], char CAN_MESSAGE[])
{
    FILE* f = fopen("CAN.csv","w");
    fprintf(f,"0x%s %s",CAN_ID, CAN_MESSAGE);
    fclose(f);
}