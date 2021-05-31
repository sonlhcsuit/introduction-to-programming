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

long long exercise086(int n){
    long long sum =0;
    for(int i =1;i<n+1;i++){
        sum = sum + i*i*i;
    }
    return sum;
}

int exercise087(int a, int b, int c){

}

int exercise088(int a, int b, int c);

int exercise089(int a, int b, int c);

int exercise090(int a, int b, int c);