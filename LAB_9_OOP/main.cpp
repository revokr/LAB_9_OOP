#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#include <stdlib.h>

#include <iostream>
#include "ui.h"
using std::cout;

void main_run() {
    parcare p;
    parcare p1;
    parcare_lab verde(0.10);
    parcare_lab rosu(0.3);
    file_parcare file;
    service srv{ rosu, file };
    UI ui{ srv };
    ui.run();
}


int main() {
    test_all();
    system("cls");

    main_run();
    _CrtDumpMemoryLeaks();
}

