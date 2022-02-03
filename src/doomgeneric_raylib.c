//doomgeneric for raylib

#define PRINT_SEPARATOR printf("===========================================================================\n");

#include "doomkeys.h"
#include "m_argv.h"
#include "doomgeneric.h"

#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

#include "raylib.h"


void DG_Init(){
    PRINT_SEPARATOR
    printf("== RAYDOOM ==\n");
    PRINT_SEPARATOR
}

void DG_DrawFrame()
{

}

void DG_SleepMs(uint32_t ms)
{

}

uint32_t DG_GetTicksMs()
{

}

int DG_GetKey(int* pressed, unsigned char* doomKey)
{

}

void DG_SetWindowTitle(const char * title)
{

}
