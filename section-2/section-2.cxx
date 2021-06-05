//
// Created by sonlh on 5/30/21.
//
#include <cmath>
#include <iostream>
#include <string>
#include <algorithm>
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
    if ((isLeap && month > 2)) {
        ith = ith + 1;
    }

    return ith + day;
}

string unit_speak(short unit) {
    switch (unit) {
        case 1:
            return "one";
        case 2:
            return "two";
        case 3:
            return "three";
        case 4:
            return "four";
        case 5:
            return "five";
        case 6:
            return "six";
        case 7:
            return "seven";
        case 8:
            return "eight";
        case 9:
            return "nine";
        default:
            return "";

    }
}

string teen_speak(short teen) {
    switch (teen) {
        case 10:
            return "ten";
        case 11:
            return "eleven";
        case 12:
            return "twelve";
        case 13:
            return "thirteen";
        case 14:
            return "fourteen";
        case 15:
            return "fifteen";
        case 16:
            return "sixteen";
        case 17:
            return "seventeen";
        case 18:
            return "eighteen";
        case 19:
            return "nineteen";
        case 20:
            return "twenty";
        default:
            return "";

    }
}

string exercise105(short number) {
    if (number == 0) {
        return "zero";
    }
    if (number > 99) {
        return "";
    }

    if (number < 10) {
        return unit_speak(number);
    }
    if (number <= 20) {
        return teen_speak(number);
    }
    short ten = number / 10;
    short unit = number % 10;
    switch (ten) {
        case 2:
            return "twenty " + unit_speak(unit);
        case 3:
            return "thirty " + unit_speak(unit);
        case 4:
            return "forty " + unit_speak(unit);
        case 5:
            return "fifty " + unit_speak(unit);
        case 6:
            return "sixty " + unit_speak(unit);
        case 7:
            return "seventy " + unit_speak(unit);
        case 8:
            return "eighty " + unit_speak(unit);
        case 9:
            return "ninety " + unit_speak(unit);
        default:
            return "";
    }
}

string exercise106(int number) {
    if (number < 100) {
        return exercise105(number);
    }
    if (number > 999) {
        return "";
    }
    int hundred = number / 100;
    int nu = number % 100;
    return unit_speak(hundred) + " hundred and " + (nu == 0 ? "" : exercise105(nu));

}

double exercise107(int n, double x) {
//    you can use pow built-in function here
    return pow(x, 1.0 / n);

//    if you wanna try hard by implement a power function with degree
//    as real number, you first implement log natural (euler number - e)
//    function (using Taylor series for implement it). Check google!
}

double exercise108(int x, int y) {
    return pow(x, y);
}

void exercise109(int n) {
    for (int i = 1; i < 10; i++) {
        string str = to_string(n) + " x " + to_string(i) + " = " + to_string(n * i);
        cout << str << "\n";
    }
}

int exercise110() {
//    simplify by using 20 - 1,2,5
//    A is number of "1"
//    B is number of "2"
//    C is number of "5"
//    A + 2*B + 5*C = 20;
//    0<= A <= 20
//    0<= B <= 10
//    0<= C <= 5
//    brute force ->
    int a = 0, b = 0, c = 0;
    int count = 0;
    for (a = 0; a <= 20; a++) {
        for (b = 0; b <= 10; b++) {
            for (c = 0; c <= 5; c++) {
                if (a + 2 * b + 5 * c == 20) {
                    count++;
                }
            }
        }
    }
    return count;
}

double exercise113(double x) {
//    exercise 74 duplicated
    return exercise074(20, x);
}

string exercise115(string name, double math, double literature) {
    return name + " " + to_string((math + literature) / 2);
}

int exercise116(int n) {
//    exercise 001 duplicated;
    return exercise001(n);
}

double exercise117(int n, double x) {
    return exercise012(n, x);
}

vector<int> exercise119(int n) {
//    implement sieve of eratosthenes
    vector<bool> sieve(n + 1, true);
    sieve[0] = false;
    sieve[1] = false;
    for (int i = 2; i < sieve.size(); i++) {
        if (!sieve[i]) {
            continue;
        } else {
            for (int j = 2; j * i < sieve.size(); j++) {
                sieve[j * i] = false;
            }
        }
    }
    vector<int> prime;
    for (int i = 0; i < sieve.size(); i++) {
        if (sieve[i]) {
            prime.push_back(i);
        }
    }
    return prime;
}

vector<int> exercise120(int n) {
    int i = 2;
    vector<int> squares;
    while (i * i < n) {
        squares.push_back(i * i);
        i = i + 1;
    }
    return squares;
}

vector<int> exercise121(int n) {
    vector<int> narcissistic;
    for (int i = 1; i < n; i++) {
        int no_digits = 0;
        int temp = i;
        while (temp != 0) {
            no_digits++;
            temp = temp / 10;
        }
        int s = 0;
        temp = i;
        while (temp != 0) {
            int digit = temp % 10;
            s = s + pow(digit, no_digits);
            temp = temp / 10;
        }
        if (s == i) {
            narcissistic.push_back(i);
        }
    }
    return narcissistic;
}


double exercise122(vector<double> array) {
    double max_value = -1000000000;
    for (int i = 0; i < array.size(); i++) {
        if (max_value < array[i]) {
            max_value = array[i];
        }
    }
    return max_value;
}

int exercise123(vector<int> array) {
    double min_value = 1000000000;
    int min_index = -1;
    for (int i = 0; i < array.size(); i++) {
        if (min_value > array[i]) {
            min_value = array[i];
            min_index = i;
        }
    }
    return min_index;
}

bool exercise124(vector<int> array) {
    for (int i : array) {
        if (i < 2004 && i % 2 == 0) {
            return true;
        }
    }
    return false;
}

int exercise125(vector<int> array) {
//    you can implement a loop over an array to check whether element
//    existed or not
    vector<int> prime = exercise119(100);
    int no_prime = 0;
    for (int i : prime) {
        int ct = count(array.begin(), array.end(), i);
        no_prime = no_prime + ct;
    }
    return no_prime;
}

double exercise126(vector<double> array) {
    double sum = 0;
    for (double element : array) {
        sum = sum + (element < 0) ? element : 0;
    }
    return sum;
}

vector<double> exercise127(vector<double> array) {
//    quick sort, bubble sort, or something is suitable for you
    sort(array.begin(), array.end());
    return array;
}

// 128 129 130 131 are empty because too easy
vector<int> exercise132(vector<int> array) {
    vector<int> t;
    copy_if(array.begin(), array.end(), back_inserter(t), [](int i) { return i >= 0; });
    return t;
}


vector<int> exercise133(vector<double> array) {
    vector<int> t;
    for (int i = 0; i < array.size(); i++) {
        if (array[i] < 0) {
            t.push_back(i);
        }
    }
    return t;

}

double exercise134(vector<double> array);

double exercise135(vector<double> array);

double exercise136(vector<double> array);

int exercise137(vector<double> array);

int exercise138(vector<int> array);

int exercise139(vector<int> array);

int exercise140(vector<double> array);