//
// Created by sonlh on 6/6/21.
//

#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
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

double exercise161(const vector<double> &array, int x, int y) {
    for (double i : array) {
        if (i > x && i < y) {
            return i;
        }
    }
    return x;
}

int exercise162(const vector<double> &array) {
    for (int i = 1; i < array.size() - 1; i++) {
        if (array[i - 1] * array[i + 1] - array[i] < 1e-9) {
            return i;
        }
    }
    return -1;
}

int exercise163(const vector<int> &array) {
    for (int i : array) {
        if (sqrtl(i) * sqrt(i) - i > 1e-9) {
            return i;
        }
    }
    return -1;
}

bool is_palindrome(int x) {
    string s = to_string(x);
    string t = to_string(x);
    return s == t;
}

int exercise164(const vector<int> &array) {
    for (int i : array) {
        if (is_palindrome(i)) {
            return i;
        }
    }
    return -1;
}

int exercise165(const vector<int> &array) {
    for (int i : array) {
        int j = i;
        while (j % 10 > 10) {
            j = j / 10;
        }
        if (j % 2 == 1) {
            return i;
        }
    }
    return 0;
}

bool is_power_of_2(int i) {
    while (i != 0) {
        if (i % 2 != 0) {
            return false;
        }
        i = i / 2;
    }
    return true;
}

int exercise166(const vector<int> &array) {
    for (int i : array) {
        if (is_power_of_2(i)) {
            return i;
        }
    }
    return 0;
}


bool is_all_digit_odd(int i) {
    while (i != 0) {
        if ((i % 10) % 2 == 0) {
            return false;
        }
        i = i / 10;
    }
    return true;
}

int exercise167(const vector<int> &array) {
    int m = 0;
    for (int i : array) {
        if (is_all_digit_odd(i)) {
            if (i > m) {
                m = i;
            }
        }
    }
    return m;
}

bool is_power_of_5(int i) {
    while (i != 0) {
        if (i % 5 != 0) {
            return false;
        }
        i = i / 5;
    }
    return true;
}


int exercise168(const vector<int> &array) {
    int m = 0;
    for (int i : array) {
        if (is_power_of_5(i)) {
            if (i > m) {
                m = i;
            }
        }
    }
    return m;
}


int exercise169(const vector<int> &array) {
    int min_odd = 1e9;
    for (int i :array) {
        if (i % 2 == 1 and i < min_odd) {
            min_odd = i;
        }
    }
    return min_odd - 1;
}

bool is_prime(int x) {
    if (x < 2) {
        return false;
    }
    if (x < 8) {
        if (x == 2 or x == 3 or x == 5 or x == 7) {
            return true;
        }
    } else {
        for (int i = 8; i < sqrt(x); i++) {
            if (x % i == 0) {
                return false;
            }
        }
    }

    return true;
}

int exercise170(const vector<int> &array) {
    int max_num = -1e9;
    for (int i :array) {
        if (i > max_num) {
            max_num = i;
        }
    }

    int i = max_num;
    while (max_num < 1e9) {
        if (is_prime(i)) {
            return i;
        }
    }
    return -1;
}

int gcd(int a, int b) {
    int temp = 0;
    while (a != 0) {
        temp = a;
        a = b % a;
        b = temp;
    }
    return b;
}

int exercise171(const vector<int> &array) {
    int gcd_value = array[0];
    for (const auto item:array) {
        gcd_value = gcd(gcd_value, item);
    }
    return gcd_value;
}

int exercise172(const vector<int> &array) {
    int gcd_value = array[0];
    int product = 1;
    for (const auto item:array) {
        product = product * item;
        gcd_value = gcd(gcd_value, item);
    }
    return product / gcd_value;
}

int exercise173(const vector<int> &array) {
    int *arr = new int[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = 0;
    }
    for (const auto item:array) {
        string str = to_string(item);
        for (int i = 0; i < str.size(); i++) {
            unsigned int char_code = (int) str[i] - 48;
            arr[char_code] = arr[char_code] + 1;
        }
    }
    int m = 0;
    int m_value = 0;
    for (int i = 0; i < 10; i++) {
        if (arr[i] > m_value) {
            m_value = arr[i];
            m = i;
        }
    }
    return m;
}

vector<pair<float, float>> exercise174(const vector<float> &array) {

    vector<pair<float, float>> result;
    for (int i = 0; i < array.size(); i++) {
        for (int j = 0; j < array.size(); j++) {
            if (array[i] < array[j]) {
                pair<float, float> p;
                p.first = array[i];
                p.second = array[j];
                result.push_back(p);
            }
        }
    }
    return result;
}

pair<float, float> exercise175(const vector<float> &array) {

    vector<pair<float, float>> result = exercise174(array);
    pair<float, float> p;
    int min_size = 1000000000;
    for (pair<float, float> item:result) {
        int diff = abs(item.first - item.second);
        if (diff < min_size) {
            p.first = item.first;
            p.second = item.second;
        }
    }
    return p;
}

vector<float> exercise176(const vector<float> &array) {
    vector<float> result;
    for (const float item:array) {
        if (item < 0) {
            result.push_back(item);
        }
    }
    return result;
}


vector<float> exercise177(const vector<float> &array, float x, float y) {
    vector<float> result;
    for (const float item:array) {
        if (item > x && item < y) {
            result.push_back(item);
        }
    }
    return result;
}

vector<int> exercise178(const vector<int> &array, int x, int y) {
    vector<int> result;
    for (const int item:array) {
        if (item > x && item < y && item % 2 == 0) {
            result.push_back(item);
        }
    }
    return result;
}
// lower than zero (-inf ... -1 )

vector<float> exercise179(const vector<float> &array) {
    return exercise176(array);
}

vector<float> exercise180(const vector<float> &array) {
    vector<float> result;
    for (int i = 1; i < array.size() - 1; i++) {
        if (array[i] < abs(array[i + 1]) && array[i] > array[i - 1]) {
            result.push_back(array[i]);
        }
    }
    return result;
}

vector<int> exercise181(const vector<int> &array) {
    vector<int> result;
    for (int i = 0; i < array.size(); i++) {
        if (array[i] % 2 == 0) {
            if (i > 0 && array[i - 1] % 2 == 0) {
                result.push_back(array[i]);
            } else if (i < array.size() - 1 && array[i + 1]) {
                result.push_back(array[i]);
            }
        }
    }
    return result;
}

vector<float> exercise182(const vector<float> &array) {
    vector<float> result;
    for (int i = 0; i < array.size(); i++) {
        if (i > 0 && array[i] * array[i - 1] < 0) {
            result.push_back(array[i]);
        } else if (i < array.size() - 1 && array[i] * array[i + 1] < 0) {
            result.push_back(array[i]);
        }
    }
    return result;
}


vector<int> exercise183(const vector<int> &array) {
    vector<int> result;
    int max_value = -1000000000;
    for (const auto item:array) {
        if (item > max_value) {
            max_value = item;
        }
    }
    for (int i = 0; i < array.size(); i++) {
        if (array[i] == max_value) {
            result.push_back(i);
        }
    }
    return result;
}


vector<int> exercise184(const vector<int> &array) {
    vector<int> result;
    for (int i = 0; i < array.size(); i++) {
        double sqrt_v = sqrt(array[i]);
        if (array[i] == 2 || array[i] == 3 || array[i] == 5 || array[i] == 7) {
            result.push_back(i);
        } else {
            bool flag = true;
            for (int j = 3; j < sqrt_v; j++) {
                if (array[i] % i == 0) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                result.push_back(i);
            }
        }
    }
    return result;
}


vector<int> exercise185(const vector<int> &array) {
    vector<int> result;
    for (int i = 0; i < array.size(); i++) {
        int v = (int) sqrt(array[i]);
        if (v * v == array[i]) {
            result.push_back(i);
        }
    }
    return result;
}


vector<int> exercise186(const vector<int> &array) {
    vector<int> result;
    int first_negative = 10000;
    for (const auto item: array) {
        if (item < 0) {
            first_negative = item;
            break;
        }
    }
    for (int i = 0; i < array.size(); i++) {
        if (array[i] == first_negative) {
            result.push_back(i);
        }
    }
    return result;
}


vector<int> exercise187(const vector<int> &array) {
    vector<int> result;
    int smallest_positive = 100000000;
    for (const auto item: array) {
        if (item > 0 && smallest_positive > item) {
            smallest_positive = item;
        }
    }
    for (int i = 0; i < array.size(); i++) {
        if (array[i] == smallest_positive) {
            result.push_back(i);
        }
    }
    return result;
}


vector<int> exercise188(const vector<int> &array) {
    vector<int> result;
    int greatest_even = -100000000;
    for (const auto item: array) {
        if (item % 2 == 0 && greatest_even < item) {
            greatest_even = item;
        }
    }
    for (int i = 0; i < array.size(); i++) {
        if (array[i] == greatest_even) {
            result.push_back(i);
        }
    }
    return result;
}

bool first_digit_prime_odd(int number) {
    bool flag = true;
    if (number == 2) return false;
    if (number == 3 || number == 5 || number == 7) return true;
    for (int i = 3; i < sqrt(number); i++) {
        if (number % i == 0) {
            flag = false;
            break;
        }
    }
    if (flag) {
        int f_digit = 0;
        while (number != 0) {
            f_digit = number % 10;
            number = number / 10;
        }
        if (f_digit % 2 == 0) {
            flag = false;
        }
    }

    return flag;
}

vector<int> exercise189(const vector<int> &array) {
    vector<int> result;

    for (int i = 0; i < array.size(); i++) {
        if (first_digit_prime_odd(array[i])) {
            result.push_back(i);
        }
    }
    return result;
}


vector<int> exercise190(const vector<int> &array) {
    vector<int> result;
    for (int i = 0; i < array.size(); i++) {
        if (is_all_digit_odd(array[i])) {
            result.push_back(i);
        }
    }
    return result;
}

vector<float> exercise191(const vector<float> &array) {
    vector<float> result;
    if (array[0] > array[1]) {
        result.push_back(array[0]);
    }
    if (array[array.size() - 1] > array[array.size() - 2]) {
        result.push_back(array[array.size() - 1]);
    }
    for (int i = 1; i < array.size() - 1; i++) {
        if (array[i] > array[i - 1] && array[i] > array[i + 1]) {
            result.push_back(array[i]);
        }
    }
    return result;
}

bool is_first_digit_even(int number) {
    while (number > 9) {
        number = number / 10;
    }

    return number % 2 == 0;
}

vector<int> exercise192(const vector<int> &array) {
    vector<int> result;

    for (const auto item:array) {
        if (is_first_digit_even(item)) {
            result.push_back(item);
        }
    }
    return result;
}

bool is_power_of_3(int number) {
    while (number != 1) {
        if (number % 3 == 0) {
            number = number / 3;
        } else {
            return false;
        }
    }
    return true;
}

vector<int> exercise193(const vector<int> &array) {
    vector<int> result;

    for (const auto item:array) {
        if (is_power_of_3(item)) {
            result.push_back(item);
        }
    }
    return result;
}


vector<pair<int, int>> exercise194(const vector<int> &array) {
    int min_dist = 1000000000;
    for (int i = 0; i < array.size(); i++) {
        for (int j = 0; j < array.size(); j++) {
            if (i != j && abs(array[i] - array[j]) < min_dist) {
                min_dist = abs(array[i] - array[j]);
            }
        }
    }
    vector<pair<int, int>> result;
    for (int i = 0; i < array.size(); i++) {
        for (int j = 0; j < array.size(); j++) {
            if (i != j && abs(array[i] - array[j]) == min_dist) {
                pair<int, int> p;
                p.first = array[i];
                p.second = array[i];
                result.push_back(p);
            }
        }
    }
    return result;
}


vector<pair<int, pair<int, int>>> exercise195(const vector<int> &array) {
    vector<pair<int, pair<int, int>>> result;
    for (int i = 0; i < array.size(); i++) {
        for (int j = 0; j < array.size(); j++) {
            for (int k = 0; k < array.size(); k++) {
                if (i != j && j != k && i != k) {
                    if (array[i] == array[j] + array[k]) {
                        pair<int, pair<int, int>> p;
                        p.first = array[i];
                        p.second.first = array[j];
                        p.second.first = array[k];
                    }
                }
            }
        }
    }
    return result;
}


vector<float> exercise196(const vector<float> &array) {
    return exercise176(array);
}