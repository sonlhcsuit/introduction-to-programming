//
// Created by sonlh on 6/6/21.
//

#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include "../section-1/section-1.h"
#include "../section-2/section-2.h"

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

double exercise134(vector<double> array) {
    double max_value = -10000000;
    for (int i = 0; i < array.size(); i++) {
        max_value = max_value < array[i] ? array[i] : max_value;
    }
    return max_value;
}

double exercise135(vector<double> array) {
    for (int i = 0; i < array.size(); i++) {
        if (array[i] > 0) return array[i];
    }
    return -1;
}

double exercise136(vector<double> array) {
    for (int i = array.size() - 1; i > -1; i--) {
        if ((int) (array[i]) % 2 == 0) return array[i];
    }
    return -1;
}

int exercise137(vector<double> array) {
    int index = -1;
    int min_value = 100000000;
    for (int i = 0; i < array.size(); i++) {
        if (min_value > array[i]) {
            min_value = array[i];
            index = i;
        }
    }
    return index;
}

int exercise138(vector<int> array) {
    for (int i = 0; i < array.size(); i++) {
        if (array[i] % 2 == 0) return i;
    }
    return -1;
}

unsigned long exercise139(vector<long long> array) {
//    perfect number is a number which sum of all its divisor is itself
//    there are only 10 perfect number  up to now (to my best knowledge)
//    6, 28, 496 , 8128 ,33550336,
//    8589869056,
//    137438691328,
//    2305843008139952128,
//    2658455991569831744654692615953842176,
//    191561942608236107294793378084303638130997321548169216
//    so we just to check that any number in that size (first 8 numbers)
    for (unsigned long i = array.size() - 1; i > -1; i--) {
        if (array[i] == 6 || array[i] == 28 ||
            array[i] == 496 || array[i] == 8128 ||
            array[i] == 33550336 || array[i] == 8589869056 ||
            array[i] == 137438691328 || array[i] == 2305843008139952128) {
            return i;
        }
    }
    return -1;
}

double exercise140(vector<double> array) {
    int index = -1;
    double min_value = 10000000000;
    for (int i = 0; i < array.size(); i++) {
        if (min_value > array[i] && array[i] > 0) {
            min_value = array[i];
            index = i;
        }
    }
    if (index != -1) {
        return min_value;
    }
    return -1;
}


int exercise141(vector<double> array) {
    int min_positive = 100000000;
    int index = -1;
    for (int i = 0; i < array.size(); i++) {
        if (array[i] > 0 && array[i] < min_positive) {
            min_positive = array[i];
            index = i;
        }
    }
    if (index != -1) {
        return min_positive;
    }
    return -1;
}

int exercise142(vector<int> array) {
    int min_value = 100000000;
    for (int i = 0; i < array.size(); i++) {
        if (array[i] < min_value) {
            min_value = array[i];
        }
    }
    return min_value;
}

int exercise143(vector<int> array) {
    for (int i = 0; i < array.size(); i++) {
        if (array[i] % 2 == 0) {
            return array[i];
        }
    }
    return -1;
}

int exercise144(vector<int> array) {
//
    for (int i = 0; i < array[i]; i++) {
        for (int j = 2; j < sqrt(i); j++) {
            if (i % j == 0) {
                return i;
            }
        }
    }
    return -1;
}

unsigned long exercise145(vector<long long> array) {
//    exercise 139 semi-duplicated
    vector<long long> reverse_array;
    for (unsigned long i = array.size() - 1; i > -1; i++) {
        reverse_array.push_back(array[i]);
    }
    return exercise139(reverse_array);
}

double exercise146(vector<double> array) {
    for (int i = 0; i < array.size(); i++) {
        if (array[i] < 0) {
            return array[i];
        }
    }
    return 1;
}

double exercise147(vector<double> array) {
    for (unsigned long i = array.size() - 1; i > -1; i--) {
        if (array[i] > 0) {
            return array[i];

        }
    }
    return -1;
}

int exercise148(vector<int> array) {
//    ex144 semi-duplicated
    for (unsigned long i = array.size() - 1; i > -1; i--) {
        for (int j = 2; j < sqrt(i); j++) {
            if (i % j == 0) {
                return i;
            }
        }
    }
    return -1;
}

unsigned long exercise149(vector<long long> array) {
//    exercise 139 duplicated
    return exercise139(array);
}

double exercise150(vector<double> array) {
    double max_negative = -10000000;
    int index = -1;
    for (int i = 0; i < array.size(); i++) {
        if (array[i] < 0 && array[i] > max_negative) {
            max_negative = array[i];
            index = i;
        }
    }
    if (index != -1) {
        return max_negative;
    }
    return 0;
}


int exercise151(vector<int> array) {
    int max_prime = 0;
    for (int i = 0; i < array.size(); i++) {
        for (int j = 2; j < sqrt(array[i]); j++) {
            if (array[i] % j == 0) {
                max_prime = (max_prime < array[i]) ? array[i] : max_prime;
            }
        }
    }
    return max_prime;
}

int exercise152(vector<long long> array) {
//
    long long min_perfect = 1000000000000000;
    for (int i = 0; i < array.size(); i++) {
        if (array[i] == 6 || array[i] == 28 ||
            array[i] == 496 || array[i] == 8128 ||
            array[i] == 33550336 || array[i] == 8589869056 ||
            array[i] == 137438691328 || array[i] == 2305843008139952128) {
            min_perfect = (min_perfect > array[i]) ? array[i] : min_perfect;
        }
    }
    return min_perfect;
}

int exercise153(vector<int> array) {
    int min_even = 100000000;
    bool flag = false;
    for (int i = 0; i < array.size(); i++) {
        if (array[i] % 2 == 0) {
            min_even = (min_even > array[i]) ? array[i] : min_even;
            flag = true;
        }
    }
    if (!flag) {
        return -1;
    }
    return min_even;
}

int exercise154(vector<double> array) {
    double max_negative = -100000000;
    int index = -1;
    bool flag = false;
    for (int i = 0; i < array.size(); i++) {
        if (array[i] < 0 && array[i] > max_negative) {
            max_negative = array[i];
        }
    }
    return index;
}

double exercise155(vector<double> array, double x) {
    double max_distance = -1;
    double value = 0;
    for (int i = 0; i < array.size(); i++) {
        if (max_distance < abs(array[i] - x)) {
            max_distance = abs(array[i] - x);
            value = array[i];
        }
    }
    return value;
}

double exercise156(vector<double> array, double x) {
    double min_distance = 100000000;
    double value = 0;
    for (int i = 0; i < array.size(); i++) {
        if (min_distance > abs(array[i] - x)) {
            min_distance = abs(array[i] - x);
            value = array[i];
        }
    }
    return value;
}

string exercise157(vector<double> array) {
    double a = 1000000;
    double b = -1000000;
    for (double element:array) {
        a = min(a, element);
        b = max(b, element);
    }
    return "[ " + to_string(a) + ", " + to_string(b) + " ]";
}

string exercise158(vector<double> array) {
    double x = -10000000;
    for (double element:array) {
        x = max(x, element);
    }
    return "[ " + to_string(-x) + ", " + to_string(x) + " ]";
}

double exercise159(vector<double> array) {
    for (int i = 0; i < array.size(); i++) {
        if (array[i] > 2003) {
            return array[i];
        }
    }
    return 0;
}

double exercise160(vector<double> array) {
    for (int i = array.size() - 1; i > -1; i--) {
        if (array[i] < 0 && array[i] > -1) {
            return array[i];
        }
    }
    return 0;
}

double exercise161(const vector<double>& array,int x,int t){


}