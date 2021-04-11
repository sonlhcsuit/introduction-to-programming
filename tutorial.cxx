#include <iostream>
#include <string>
#include "section-1/section-1.h"

using namespace std;

int main(int argc, char **argv) {
    cout << "Hello World\n";
    if (argc == 1) {
        cout << exercise001(stoi(argv[0]));

    } else {
        cout << exercise001(10);

    }
    return 1;
}