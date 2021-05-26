#include <iostream>
#include <string>
#include <cmath>
#include "section-1/section-1.h"

using namespace std;

int main(int argc, char **argv) {
    cout << "Hello World\n";
    if (argc == 1 + 1) {
//        vector<int> res = exercise020(stoi(argv[1]));
//        for (int i = 0; i < res.size(); i++) {
//            cout << res[i] << " ";
//        }
        cout << exercise042(stoi(argv[1]));

    } else {
//        cout << (10);

    }
    return 1;
}