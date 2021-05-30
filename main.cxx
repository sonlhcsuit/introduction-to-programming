#include <iostream>
#include <string>
#include <cmath>
#include "section-1/section-1.h"

using namespace std;

int main(int argc, char **argv) {
    cout << "Hello World\n";
    if (argc == 1 + 1) {
//        vector<double> res = exercise066(stoi(argv[1]), stoi(argv[2]), stoi(argv[3]));
//        for (int i = 0; i < res.size(); i++) {
//            cout << res[i] << " ";
//        }

//        cout << exercise064(stoi(argv[1]),stoi(argv[2]));
        cout << exercise076(stoi(argv[1]));
    } else {
//        cout << (10);

    }
    return 1;
}