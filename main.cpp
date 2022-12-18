#include "src/raycaster.h"
#include <cstdlib>

int main(int argc, char *argv[]) {
    auto *raycaster = new raycaster::Raycaster();
    raycaster->createWindow();
    raycaster->waitQuit();

    return EXIT_SUCCESS;
}