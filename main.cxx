#include <iostream>
#include <string>
#include <cmath>
#include "section-1/section-1.h"
#include "section-2/section-2.h"
#include "section-5/section-5.h"

using namespace std;

int main(int argc, char **argv) {
    cout << "Hello World\n";

    vector<float> v = {4444.0, 2.0, 8.0};
    vector<int> y = {3, 9, 27, 81, 90, 100,0};

    bool t = exercise240(y);
    cout << t;


    return 1;
}