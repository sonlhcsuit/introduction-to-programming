#include <iostream>
#include <string>
#include "section-1/ex1.h"

using namespace std;

int main(int argc, char **argv) {
    cout << "Hello World\n";
    if (argc == 1) {
        cout << ex001(stoi(argv[0]));

    } else {
        cout << ex001(10);

    }
    return 1;
}