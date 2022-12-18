#include "src/raycaster.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
    raycaster::Raycaster raycaster;
    raycaster.createWindow();
    raycaster.waitQuit();

    return EXIT_SUCCESS;
}