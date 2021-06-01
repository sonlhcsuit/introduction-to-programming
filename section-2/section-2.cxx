//
// Created by sonlh on 5/30/21.
//
#include <cmath>
#include <iostream>
#include <string>
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
    for (int i = 1; i < n + 1; i = i + 2) {
        sum = sum + i;
    }
    return sum;
}

int exercise090(int n) {
//    exercise 42 duplicated
    return exercise042(n);
}

int exercise091() {
    for (int i = 1; i < 101; i++) {
        cout << i << " ";
    }
    return 0;
}

int exercise092(int a, int b) {
//    exercise 62 duplicated
//    return exercise062(a, b);
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

bool exercise093(int a) {
    if (a == 2 || a == 3 || a == 5 || a == 7) return true;
    for (int i = 2; i < sqrt(a); i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;

}

int exercise094() {
    for (int i = 1; i < 101; i = i + 2) {
        if (i != 5 && i != 7 && i != 93) {
            cout << i << " ";
        }
    }
    return 0;
}

vector<double> exercise095(double a, double b, double c) {
    vector<double> t;
//    t.push_back(abs(a));
//    t.push_back(abs(b));
//    t.push_back(abs(c));

    return t;
}

double exercise096(double x) {
    double result = 0;
    if (x >= 5.0) {
        result = 2 * x * x + 5 * x + 9;
    }
    if (x < 5) {
        result = -2 * x * x + 4 * x - 9;
    }
    return result;
}

string exercise097(double a, double b, double c) {
//   Validation of triangle
    if (!(a + b > c && a + c > b && b + c > a)) {
//        Triangle inequality
        return "Not a triangle";
    }
//   Equilateral - Tam giac deu
    if (a == b && b == c && c == a) {
        return "Equilateral";
    }
    if (b == c || a == b || c == a) {
//        Isosceles - Tam giac can
//      Right and Isosceles - Tam giac vuong can
        if (a * a - b * b - c * c < 1e-10 || b * b - a * a - c * c < 1e-10 || c * c - a * a - b * b < 1e-10) {
            return "Right Isosceles";
        }
        return "Isosceles";
    }
    if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
        return "Right";
    }
    return "Scalene";

}

vector<double> exercise098(double a, double b, double c, double d, double e, double f) {
//    because this is very easy to compute using basic math
//    if more than 3 equation, system of linear equation will be considered
//    but in this one, i will implement system of linear equation solvers

    vector<double> solutions;


    return solutions;

}

vector<double> exercise099(double a, double b, double c) {
//    check exercise 82 for more information
    vector<double> t;
    double max = 0;
    double min = 0;
    min = (a + b - abs(a - b)) / 2;
    min = (min + c - abs(min - c)) / 2;
    max = (a + b + abs(a - b)) / 2;
    max = (max + c + abs(max - c)) / 2;
    t.push_back(min);
    t.push_back(a + b + c - max - min);
    t.push_back(max);
    return t;
}


vector<double> exercise100(double a, double b, double c) {
//    exercise 65 duplicated
    return exercise065(a, b, c);
}