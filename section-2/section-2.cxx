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
//    but in this one, i will use the dense implementation
//    because implement an system of linear equations is not easy (that true!)
//    Cramer method is a nightmare with O(n^3)
//    ax + by = c
//    dx + ey = f
//    we have 3 case:
//    case 1: no solution - [nan,nan]
//    case 2: only solution - [N,N]
//    case 3: countless solution [nan]
//    line 1 : ax + by = c => y = -ax/b + c
//    line 2 : dx + ey = f => y = -dx/e + f
//    slope are the same => parallel
//    =========================================================================
//    case 1: no solution - 2 lines are parallel. slope must be the same
//    a/d == b/e
//    special case : a , b , d , e with zero - no solver because too long for explain.
    cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << "\n";
    vector<double> solution;
    if (a == 0 || b == 0 || d == 0 || e == 0) {
        return solution;
    }


//    case 1: no solution - 2 lines are parallel.
    if (a / d == b / e && a / d != c / f) {
//        slopes are the same, but not with constant
        solution.push_back(NAN);
        solution.push_back(NAN);
        return solution;
    }
//    case 3: countless solution - 2 lines are the same.
    if (a / d == b / e && a / d == c / f) {
//        3 coefficients of lines must be the same in term of ratio.
        solution.push_back(NAN);

        return solution;
    }
//    case 2: unique solution, slope are different in term of ratio
    if (a / d != b / e) {
//        find x first, then y
//        check the first equation
        double x = 0, y = 0;
        double y_ratio = b / e;
        x = (c - y_ratio * f) / (a - d * y_ratio);
        y = (c - a * x) / b;
        solution.push_back(x);
        solution.push_back(y);
        return solution;
    }
    solution.push_back(NAN);

    return solution;
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

//

short exercise101(int month, int year) {
    short date_of_feb = 28;
    if ((year % 4 == 0 && year != 100) || year % 400) {
        date_of_feb = 29;
    }
    switch (month) {
        case 2:
            return date_of_feb;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        default:
            return 30;
    }

}

string exercise102(int day, int month, int year) {
    bool isLeap = false;
    if ((year % 4 == 0 && year != 100) || year % 400) {
        isLeap = true;
    }
    day = day + 1;
    switch (month) {
        case 2:
            if ((day > 29 && isLeap) || (day > 28 && !isLeap)) {
                month = 3;
                day = 1;
            }
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day > 31) {
                day = 1;
                month = month + 1;
            }
            break;
        default:
            if (day > 30) {
                day = 1;
                month = month + 1;
            }
    }
    if (month > 12) {
        month = 1;
        year = year + 1;
    }

    return to_string(day) + "/" + to_string(month) + "/" + to_string(year);

}

string exercise103(int day, int month, int year) {
    bool isLeap = false;
    if ((year % 4 == 0 && year != 100) || year % 400) {
        isLeap = true;
    }
    day = day - 1;
    if (day == 0) {
        month = month - 1;
    }
    switch (month) {
        case 2:
            if ((day == 0 && isLeap)) {
                day = 29;
            } else if (day == 0 && !isLeap) {
                day = 28;
            }
            break;
        case 0:
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day == 0) {
                day = 31;
            }
            break;
        default:
            if (day == 0) {
                day = 30;
            }
    }

    if (month == 0) {
        month = 12;
        year = year - 1;
    }

    return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
}

int exercise104(int day, int month, int year) {
    bool isLeap = false;
    if ((year % 4 == 0 && year != 100) || year % 400) {
        isLeap = true;
    }
    int ith = 0;
    switch (month - 1) {
        case 12:
            ith = ith + 31;
        case 11:
            ith = ith + 30;
        case 10:
            ith = ith + 31;
        case 9:
            ith = ith + 30;
        case 8:
            ith = ith + 31;
        case 7:
            ith = ith + 31;
        case 6:
            ith = ith + 30;
        case 5:
            ith = ith + 31;
        case 4:
            ith = ith + 30;
        case 3:
            ith = ith + 31;
        case 2:
            ith = ith + 28;
        case 1:
            ith = ith + 31;
    }
    if ((isLeap && month > 2) ) {
        ith = ith + 1;
    }

    return ith + day;
}

string exercise105(short number);

string exercise106(int number);

double exercise107(int n, double x);

double exercise108(int x, int y);

void exercise109(int n);

int exercise110();