#include <iostream>
#include <string>
#include "section-1/section-1.h"

using namespace std;

int main(int argc, char **argv) {
    cout << "Hello World\n";
    if (argc == 2 + 1) {
        cout << exercise010(stoi(argv[1]), stoi(argv[2]));

    } else {
//        cout << (10);

    }
    return 1;
}