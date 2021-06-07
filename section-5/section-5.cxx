//
// Created by sonlh on 6/6/21.
//

#include <cmath>
#include <iostream>
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
for(int i = 0)
}

double exercise147(vector<double> array);

int exercise148(vector<int> array);

int exercise149(vector<int> array);

double exercise150(vector<double> array);