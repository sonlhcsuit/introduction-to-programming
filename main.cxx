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
    vector<int> y = {3, 9, 27, 81, 90, 100};
//    vector<pair<float, float>> result = exercise174(v);
//
//    for (pair<float, float> &item : result) {
//        cout << item.first << " - " << item.second << "\n";
//    }
    vector<int> result = exercise193(y);
    for (const auto item:result) {
        cout << item << "\n";
    }

    return 1;
}