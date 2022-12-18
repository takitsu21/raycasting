#include "src/raycaster.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
    Raycaster *raycaster = new Raycaster();

    raycaster->createWindow();
    return EXIT_SUCCESS;
}