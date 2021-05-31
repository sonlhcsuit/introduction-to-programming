//
// Created by sonlh on 5/30/21.
//
#include <cmath>
#include <iostream>
#include "../section-1/section-1.h"

using namespace std;

int exercise082(int a, int b, int c) {
    int t = (a + b + abs(a - b)) / 2;
    t = (t + c + abs(t - c)) / 2;
    return t;
}

bool exercise083(double a, double b) {
//    shift right all integer version of any number, check if are the same
    cout << a << ' ' << b << "\n";
    int s_a = (int) a >> 31;
    int s_b = (int) b >> 31;
    return s_a == s_b;
}

double exercise084(double a, double b) {
//    exercise 64 duplicated
    return exercise064(a, b);
}

int exercise085(int a) {
    if (a > 12 || a < 0)return NAN;
    return a % 3 + 1;
}

long long exercise086(int n) {
    long long sum = 0;
    for (int i = 1; i < n + 1; i++) {
        sum = sum + i * i * i;
    }
    return sum;
}

int exercise087(int n) {
//    Can reuse exercise 43 to fast-implementation this one
//    base on arithmetic progression
    return exercise042(n) + 1;
}

int exercise088() {
    for (int i = 65; i < 91; i++) {
        char s = i;
        cout << s << " ";
    }
    cout << "\n";
    return 0;
}

int exercise089(int n) {
    long sum = 0;
    for (int i = 1; i < n + 1; i=i+2) {
        sum = sum +i;
    }
    return sum;
}

int exercise090(int n) {
//    exercise 42 duplicated
    return exercise042(n);
}