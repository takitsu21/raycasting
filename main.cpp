#include "include/raycaster.h"
#include <cstdlib>

int main(int argc, char *argv[]) {
    auto *raycaster = new Raycaster();
    raycaster->createWindow();
    raycaster->waitEvent();

    return EXIT_SUCCESS;
}