//
// Created by sonlh on 6/6/21.
//

#include "../helper/helper.h"
#include "../section-1/section-1.h"
#include "../section-2/section-2.h"
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
double exercise122(const vector<double> &array) {
  double max_value = -1000000000;
  for (const auto item : array) {
    if (max_value < item) {
      max_value = item;
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

bool exercise124(const vector<int> &array) {
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
  copy_if(array.begin(), array.end(), back_inserter(t),
          [](int i) { return i >= 0; });
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

double exercise134(const vector<double> &array) {
  double max_value = -10000000;
  for (const auto item : array) {
    max_value = max_value < item ? item : max_value;
  }
  return max_value;
}

double exercise135(const vector<double> &array) {
  for (const auto item : array) {
    if (item > 0)
      return item;
  }
  return -1;
}

double exercise136(const vector<double> &array) {
  for (int i = array.size() - 1; i > -1; i--) {
    if ((int)(array[i]) % 2 == 0)
      return array[i];
  }
  return -1;
}

int exercise137(vector<double> array) {
  int index = -1;
  double min_value = 100000000;
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
    if (array[i] % 2 == 0)
      return i;
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
    if (array[i] == 6 || array[i] == 28 || array[i] == 496 ||
        array[i] == 8128 || array[i] == 33550336 || array[i] == 8589869056 ||
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
  double min_positive = 100000000;
  int index = -1;
  for (int i = 0; i < array.size(); i++) {
    if (array[i] > 0 && array[i] < min_positive) {
      min_positive = array[i];
      index = i;
    }
  }
  if (index != -1) {
    return (int)min_positive;
  }
  return -1;
}

int exercise142(const vector<int> &array) {
  int min_value = 100000000;
  for (const auto item : array) {
    if (item < min_value) {
      min_value = item;
    }
  }
  return min_value;
}

int exercise143(const vector<int> &array) {
  for (const auto item : array) {
    if (item % 2 == 0) {
      return item;
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

double exercise146(const vector<double> &array) {
  for (const auto item : array) {
    if (item < 0) {
      return item;
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

int exercise148(const vector<int> &array) {
  //    ex144 semi-duplicated
  for (unsigned long i = array.size() - 1; i > -1; i--) {
    for (int j = 2; j < sqrt(i); j++) {
      if (i % j == 0) {
        return (int)i;
      }
    }
  }
  return -1;
}

unsigned long exercise149(const vector<long long> &array) {
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

int exercise151(const vector<int> &array) {
  int max_prime = 0;
  for (const auto item : array) {
    for (int j = 2; j < sqrt(item); j++) {
      if (item % j == 0) {
        max_prime = (max_prime < item) ? item : max_prime;
      }
    }
  }
  return max_prime;
}

int exercise152(const vector<long long> &array) {
  //
  long long min_perfect = 1000000000000000;
  for (const auto item : array) {
    if (item == 6 || item == 28 || item == 496 || item == 8128 ||
        item == 33550336 || item == 8589869056 || item == 137438691328 ||
        item == 2305843008139952128) {
      min_perfect = (min_perfect > item) ? item : min_perfect;
    }
  }
  return (int)min_perfect;
}

int exercise153(const vector<int> &array) {
  int min_even = 100000000;
  bool flag = false;
  for (const auto item : array) {
    if (item % 2 == 0) {
      min_even = (min_even > item) ? item : min_even;
      flag = true;
    }
  }
  if (!flag) {
    return -1;
  }
  return min_even;
}

int exercise154(const vector<double> &array) {
  double max_negative = -100000000;
  int index = -1;
  bool flag = false;
  for (int i = 0; i < array.size(); i++) {
    if (array[i] < 0 && array[i] > max_negative) {
      max_negative = array[i];
      index = i;
    }
  }
  return index;
}

double exercise155(const vector<double> &array, double x) {
  double max_distance = -1;
  double value = 0;
  for (const auto item : array) {
    if (max_distance < abs(item - x)) {
      max_distance = abs(item - x);
      value = item;
    }
  }
  return value;
}

double exercise156(const vector<double> &array, double x) {
  double min_distance = 100000000;
  double value = 0;
  for (const auto item : array) {
    if (min_distance > abs(item - x)) {
      min_distance = abs(item - x);
      value = item;
    }
  }
  return value;
}

string exercise157(const vector<double> &array) {
  double a = 1000000;
  double b = -1000000;
  for (double element : array) {
    a = min(a, element);
    b = max(b, element);
  }
  return "[ " + to_string(a) + ", " + to_string(b) + " ]";
}

string exercise158(const vector<double> &array) {
  double x = -10000000;
  for (double element : array) {
    x = max(x, element);
  }
  return "[ " + to_string(-x) + ", " + to_string(x) + " ]";
}

double exercise159(const vector<double> &array) {
  for (const auto item : array) {
    if (item > 2003) {
      return item;
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

int exercise166(const vector<int> &array) {
  for (int i : array) {
    if (is_power_of_2(i)) {
      return i;
    }
  }
  return 0;
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
  for (int i : array) {
    if (i % 2 == 1 and i < min_odd) {
      min_odd = i;
    }
  }
  return min_odd - 1;
}

int exercise170(const vector<int> &array) {
  int max_num = -1e9;
  for (int i : array) {
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

int exercise171(const vector<int> &array) {
  int gcd_value = array[0];
  for (const auto item : array) {
    gcd_value = gcd(gcd_value, item);
  }
  return gcd_value;
}

int exercise172(const vector<int> &array) {
  int gcd_value = array[0];
  int product = 1;
  for (const auto item : array) {
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
  for (const auto item : array) {
    string str = to_string(item);
    for (int i = 0; i < str.size(); i++) {
      unsigned int char_code = (int)str[i] - 48;
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
  for (pair<float, float> item : result) {
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
  for (const float item : array) {
    if (item < 0) {
      result.push_back(item);
    }
  }
  return result;
}

vector<float> exercise177(const vector<float> &array, float x, float y) {
  vector<float> result;
  for (const float item : array) {
    if (item > x && item < y) {
      result.push_back(item);
    }
  }
  return result;
}

vector<int> exercise178(const vector<int> &array, int x, int y) {
  vector<int> result;
  for (const int item : array) {
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
  for (const auto item : array) {
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
    int v = (int)sqrt(array[i]);
    if (v * v == array[i]) {
      result.push_back(i);
    }
  }
  return result;
}

vector<int> exercise186(const vector<int> &array) {
  vector<int> result;
  int first_negative = 10000;
  for (const auto item : array) {
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
  for (const auto item : array) {
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
  for (const auto item : array) {
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

vector<int> exercise192(const vector<int> &array) {
  vector<int> result;

  for (const auto item : array) {
    if (is_first_digit_even(item)) {
      result.push_back(item);
    }
  }
  return result;
}

vector<int> exercise193(const vector<int> &array) {
  vector<int> result;

  for (const auto item : array) {
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

vector<int> exercise197(const vector<int> &array) {
  vector<int> result;
  for (const auto item : array) {
    if (!is_first_digit_even(item)) {
      result.push_back(item);
    }
  }
}

vector<int> exercise198(const vector<int> &array) { return exercise183(array); }

vector<int> exercise199(const vector<int> &array) { return exercise189(array); }

int exercise200(const vector<int> &array) {
  int sum = 0;
  for (const auto item : array) {
    sum += item;
  }
  return sum;
}

float exercise201(const vector<float> &array) {
  float sum = 0;
  for (const auto item : array) {
    sum = sum + ((item >= 0) ? item : 0);
  }
  return sum;
}

int exercise202(const vector<int> &array) {
  int sum = 0;
  for (const auto item : array) {
    sum = sum + ((item % 2 == 1) ? item : 0);
  }
  return sum;
}

int exercise203(const vector<int> &array) {
  int sum = 0;
  for (const auto item : array) {
    sum = sum + ((((item / 10) % 10) == 5) ? item : 0);
  }
  return sum;
}

float exercise204(const vector<float> &array) {
  float sum = 0;
  for (int i = 1; i < array.size(); i++) {
    sum = sum + ((array[i] > array[i - 1]) ? array[i] : 0);
  }
  return sum;
}

float exercise205(const vector<float> &array) {
  float sum = 0;
  for (int i = 0; i < array.size() - 1; i++) {
    sum = sum + ((abs(array[i]) > abs(array[i + 1])) ? array[i] : 0);
  }
}

float exercise206(const vector<float> &array) {
  float sum = 0;
  for (int i = 1; i < array.size() - 1; i++) {
    sum = sum +
          ((array[i] > array[i - 1] && array[i] > array[i + 1]) ? array[i] : 0);
  }
  return sum;
}

float exercise207(const vector<float> &array) {
  float sum = 0;
  for (int i = 1; i < array.size() - 1; i++) {
    sum = sum + (((array[i] > array[i - 1] && array[i] > array[i + 1]) or
                  (array[i] < array[i - 1] && array[i] < array[i + 1]))
                     ? array[i]
                     : 0);
  }
  return sum;
}

int exercise208(const vector<int> &array) {
  int sum = 0;
  for (int i = 0; i < array.size() - 1; i++) {
    int result = array[i] / 1.0;
    if (result * result == array[i]) {
      sum = sum + array[i];
    }
  }
  return sum;
}

int exercise209(const vector<int> &array) {
  int sum = 0;
  for (int i = 0; i < array.size(); i++) {
    sum = sum + (is_palindrome(array[i]) ? array[i] : 0);
  }
  return sum;
}

int exercise210(const vector<int> &array) {
  int sum = 0;
  for (const auto item : array) {
    if (first_digit(item) % 2 == 0) {
      sum = sum + item;
    }
  }
  return sum;
}

float exercise211(const vector<int> &array) {
  int sum = 0;
  int ct = 0;
  for (const auto item : array) {
    if (is_prime(item) % 2 == 0) {
      sum = sum + item;
      ct++;
    }
  }
  return sum * 1.0 / ct;
}

double exercise212(const vector<float> &array) {
  double sum = 0;
  int ct = 0;
  for (const auto item : array) {
    sum = sum + (item > 0 ? item : 0);
    ct = ct + (item > 0 ? 1 : 0);
  }
  return sum / ct;
}

double exercise213(const vector<float> &array, float x) {
  double sum;
  int ct = 0;
  for (const auto item : array) {
    sum = sum + (item > x ? item : 0);
    ct = ct + (item > x ? 1 : 0);
  }
  return sum / ct;
}

double exercise214(const vector<float> &array) {
  double product;
  int ct;
  for (const auto item : array) {
    product = product * (item > 0 ? item : 1);
    ct = ct + (item > 0 ? 1 : 0);
  }
  return product / ct;
}

double exercise215(const vector<float> &array) {
  double sum = 0;
  for (const auto item : array) {
    sum = sum + abs(item);
  }
  return sum / array.size();
}

int exercise216(const vector<int> &array) {
  int ct = 0;
  for (const auto item : array) {
    ct = ct + (item % 2 == 0 ? 1 : 0);
  }
  return ct;
}

int exercise217(const vector<int> &array) {
  int ct = 0;
  for (const auto item : array) {
    ct = ct + (item % 7 == 0 ? 1 : 0);
  }
  return ct;
}

int exercise218(const vector<int> &array) {
  int ct = 0;
  for (const auto item : array) {
    ct = ct + (is_palindrome(item) ? 1 : 0);
  }
  return ct;
}

int exercise219(const vector<float> &array, float x) {
  int ct = 0;
  for (const auto item : array) {
    ct = ct + (abs(item - x) < 1e-6 ? 1 : 0);
  }
}

int exercise220(const vector<int> &array) {
  int ct = 0;
  for (const auto item : array) {
    ct = ct + (item % 10 == 5 ? 1 : 0);
  }
  return ct;
}

int exercise221(const vector<int> &array) {
  int rel = 0;
  for (const auto item : array) {
    rel = rel + (item % 2 == 0 ? 1 : -1);
  }
  return (rel > 0) ? -1 : (rel < 0) ? 1 : 0;
}

float exercise222(const vector<float> &array) {
  float ct = 0;
  for (int i = 1; i < array.size() - 1; i++) {
    ct = ct + (((array[i] > array[i - 1] && array[i] > array[i + 1]) or
                (array[i] < array[i - 1] && array[i] < array[i + 1]))
                   ? 1
                   : 0);
  }
  return ct;
}

int exercise223(const vector<int> &array) {
  int ct = 0;
  for (const auto item : array) {
    ct = ct + (is_prime(item) ? 1 : 0);
  }
  return ct;
}

int exercise224(const vector<int> &array) {
  float ct = 0;
  for (const auto item : array) {
    ct = ct + (is_perfect(item) ? 1 : 0);
  }
  return ct;
}

int exercise225(const vector<float> &array) {
  int ct = 0;
  float max_val = -100000000;
  for (const auto item : array) {
    if (item > max_val) {
      max_val = item;
      ct = 0;
    } else if (item == max_val) {
      ct++;
    }
  }
  return ct;
}

int exercise226(const vector<int> &array) {
  int ct = 0;
  for (int i = 0; i < array.size() - 1; i++) {
    ct = ct + ((array[i] % 2 == 0 && array[i + 1] % 2 == 0) ? 1 : 0);
  }
  return ct;
}

int exercise227(const vector<int> &array) {
  int ct = 0;
  for (int i = 0; i < array.size() - 1; i++) {
    ct = ct + ((array[i] * array[i + 1] < 0) ? 1 : 0);
  }
  return ct;
}

int exercise228(const vector<int> &array) {
  int ct = 0;
  for (int i = 0; i < array.size() - 1; i++) {
    ct = ct +
         ((array[i] * array[i + 1] > 0 and abs(array[i + 1]) > abs(array[i]))
              ? 1
              : 0);
  }
  return ct;
}

vector<int> exercise229(const vector<int> &array) {
  unordered_set<int> s(array.begin(), array.end());
  vector<int> t(s.begin(), s.end());
  return t;
}

unordered_map<int, int> exercise230(const vector<int> &array) {
  unordered_map<int, int> counter;
  int *t = nullptr;
  for (const int item : array) {
    if (counter.count(item) == 0) {
      counter[item] = 1;

    } else {
      counter[item] = counter[1] + 1;
    }
  }
  return counter;
}

vector<int> exercise231(const vector<int> &array) {
  unordered_map<int, int> t = exercise230(array);
  vector<int> temp;
  for (const auto &[key, value] : t) {
    if (value == 1) {
      temp.push_back(key);
    }
  }
  return temp;
}

vector<int> exercise232(const vector<int> array) {
  unordered_map<int, int> t = exercise230(array);
  vector<int> temp;
  for (const auto &[key, value] : t) {
    if (value > 1) {
      temp.push_back(key);
    }
  }
  return temp;
}

unordered_map<int, int> exercise233(const vector<int> &array) {
  return exercise230(array);
}

int exercise234(const vector<float> &a, const vector<float> &b) {
  vector<float> t;
  vector<float>::iterator it;
  it = set_difference(a.begin(), a.end(), b.begin(), b.end(), t.begin());
  t.resize(it - t.begin());
  return t.size();
}

vector<float> exercise235(const vector<float> &a, const vector<float> &b) {
  vector<float> t;
  vector<float>::iterator it;
  it = set_difference(a.begin(), a.end(), b.begin(), b.end(), t.begin());
  t.resize(it - t.begin());
  return t;
}

int exercise236(const vector<int> &array) {
  unordered_map<int, int> t_map = exercise230(array);
  int m_v = -110000000;
  int m_i = 0;
  for (const auto &[key, value] : t_map) {
    if (value > m_v) {
      m_i = key;
    }
  }
  return m_i;
}

vector<int> exercise238(const vector<int> &array) {
  unordered_map<int, int> t_map = exercise230(array);
  int m_v = -10000000;
  vector<int> result;
  for (const auto &[key, value] : t_map) {
    if (value > m_v) {
      result.clear();
      result.push_back(key);
    } else if (value == m_v) {
      result.push_back(key);
    }
  }
  return result;
}

vector<int> exercise239(const vector<int> &array) {
  vector<int> primes;
  for (const auto item : array) {
    if (is_prime(item)) {
      primes.push_back(item);
    }
  }
  unordered_set<int> set_primes(primes.begin(), primes.end());
  vector<int> s(set_primes.begin(), set_primes.end());
  return s;
}

bool exercise240(const vector<int> &array) {
  for (const auto item : array) {
    if (item == 0) {
      return true;
    }
  }
  return false;
}

bool exercise241(const vector<int> &array) {
  for (int i = 0; i < array.size(); i++) {
    if (array[i] == 0) {
      if (array[i + 1] == 0)
        return true;
    }
  }
  return false;
}

bool exercise242(const vector<int> &array) {
  for (const int item : array) {
    if (item % 2 == 0) {
      return true;
    }
  }
  return false;
}

bool exercise243(const vector<int> &array) {
  for (const auto item : array) {
    if (is_prime(item)) {
      return true;
    }
  }
  return false;
}

bool exercise244(const vector<int> &array) {
  for (const auto item : array) {
    if (is_perfect(item) && item > 256) {
      return true;
    }
  }
  return false;
}

bool exercise225(const vector<int> &array) {
  for (const auto item : array) {
    if (item % 2 == 1) {
      return false;
    }
  }
  return true;
}

bool exercise246(const vector<int> &array) {
  for (const auto item : array) {
    if (!is_palindrome(item)) {
      return false;
    }
  }
  return true;
}

bool exercise247(const vector<int> &array) {
  for (int i = 0; i < array.size() - 1; i++) {
    if ((array[i] + array[i + 1]) % 2 == 0) {
      return false;
    }
  }
  return true;
}

bool exercise248(const vector<int> &array) {
  for (int i = 0; i < array.size() - 1; i++) {
    if (array[i] > array[i + 1]) {
      return false;
    }
  }
  return true;
}

bool exercise249(const vector<int> &array) {
  for (int i = 0; i < array.size() - 1; i++) {
    if (array[i] <= array[i + 1]) {
      return false;
    }
  }
  return true;
}

int exercise250(const vector<int> &array) {
  int d = array[1] - array[0];

  for (int i = 0; i < array.size() - 1; i++) {
    if (array[i + 1] - array[i] != d) {
      return 0;
    }
  }

  return d;
}

int exercise251(const vector<int> &array) {
  int value = array[0];
  for (const auto item : array) {
    if (item != value) {
      return false;
    }
  }

  return true;
}

bool exercise252(const vector<float> &array) {
  for (int i = 1; i < array.size(); i++) {
    if (!((array[i] > array[i - 1] && array[i] > array[i + 1]) ||
          (array[i] < array[i - 1] && array[i] < array[i + 1]))) {
      return false;
    }
  }
  return true;
}

bool exercise253(const vector<int> &a, vector<int> &b) {
  for (const auto item : a) {
    if (count(b.begin(), b.end(), item) == 0) {
      return false;
    }
  }
  return true;
}

int exercise254(const vector<int> &array) {
  int ct = 0;
  int current_max = array[0];
  for (const auto item : array) {
    if (item > current_max) {
      current_max = item;
      ct++;
    }
  }

  return ct;
}

vector<int> exercise255(vector<int> array) {
  // using selection sort for easy?
  // quicksort is better
  for (int i = 0; i < array.size(); i++) {
    int mi = i;
    for (int j = i; j < array.size(); j++) {
      if (array[j] > array[mi]) {
        mi = j;
      }
    }
    // swap
    int t1 = array[mi];
    int t2 = array[i];
    array[mi] = t2;
    array[i] = t1;
  }
  return array;
}

vector<int> exercise256(vector<int> array) {

  // using selection sort for easy?
  // quicksort is better
  for (int i = 0; i < array.size(); i++) {
    int mi = i;
    for (int j = i; j < array.size(); j++) {
      if (array[j] < array[mi]) {
        mi = j;
      }
    }
    // swap
    int t1 = array[mi];
    int t2 = array[i];
    array[mi] = t2;
    array[i] = t1;
  }
  return array;
}

vector<int> exercise257(vector<int> array) {

  // using selection sort for easy?
  // quicksort is better
  for (int i = 1; i < array.size(); i = i + 2) {
    int mi = i;
    for (int j = i; j < array.size(); j = j + 2) {
      if (array[j] > array[mi]) {
        mi = j;
      }
    }
    // swap
    int t1 = array[mi];
    int t2 = array[i];
    array[mi] = t2;
    array[i] = t1;
  }
  return array;
}

vector<int> exercise258(vector<int> array) {

  for (int i = 0; i < array.size(); i++) {
    if (!is_prime(array[i])) {
      continue;
    }

    int mi = i;
    for (int j = i; j < array.size(); j++) {
      if (!is_prime(array[j])) {
        continue;
      }
      if (array[j] > array[mi]) {
        mi = j;
      }
    }
    if (mi != i) {
      // swap

      int t1 = array[mi];
      int t2 = array[i];
      array[mi] = t2;
      array[i] = t1;
    }
  }

  return array;
}

vector<int> exercise259(vector<int> array) {

  for (int i = 0; i < array.size(); i++) {
    if (!is_perfect(array[i])) {
      continue;
    }

    int mi = i;
    for (int j = i; j < array.size(); j++) {
      if (!is_perfect(array[j])) {
        continue;
      }
      if (array[j] > array[mi]) {
        mi = j;
      }
    }
    if (mi != i) {
      // swap

      int t1 = array[mi];
      int t2 = array[i];
      array[mi] = t2;
      array[i] = t1;
    }
  }

  return array;
}

bool exercise260(vector<int> a, vector<int> b) {
  if (a.size() != b.size()) {
    return false;
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  for (int i = 0; i < a.size(); i++) {
    if (a[i] != b[i])
      return false;
  }
  return true;
}

vector<float> exercise261(vector<float> array) {

  for (int i = 0; i < array.size(); i++) {
    if (array[i] <= 0) {
      continue;
    }

    int mi = i;
    for (int j = i; j < array.size(); j++) {
      if (array[i] <= 1) {
        continue;
      }
      if (array[j] > array[mi]) {
        mi = j;
      }
    }
    if (mi != i) {
      // swap

      int t1 = array[mi];
      int t2 = array[i];
      array[mi] = t2;
      array[i] = t1;
    }
  }
  return array;
}

vector<int> exercise262(vector<int> array) {
  // sort by odd
  for (int i = 0; i < array.size(); i++) {
    if (array[i] % 2 == 0) {
      continue;
    }

    int mi = i;
    for (int j = i; j < array.size(); j++) {
      if (array[i] % 2 == 0) {
        continue;
      }
      if (array[j] > array[mi]) {
        mi = j;
      }
    }
    if (mi != i) {
      // swap

      int t1 = array[mi];
      int t2 = array[i];
      array[mi] = t2;
      array[i] = t1;
    }
  }
  // sort by even
  for (int i = 0; i < array.size(); i++) {
    if (array[i] % 2 == 1) {
      continue;
    }

    int mi = i;
    for (int j = i; j < array.size(); j++) {
      if (array[i] % 2 == 1) {
        continue;
      }
      if (array[j] > array[mi]) {
        mi = j;
      }
    }
    if (mi != i) {
      // swap

      int t1 = array[mi];
      int t2 = array[i];
      array[mi] = t2;
      array[i] = t1;
    }
  }
  return array;
}

vector<int> exercise263(vector<int> array) {
  // sort negative descending
  for (int i = 0; i < array.size(); i++) {
    if (array[i] > 0)
      continue;

    int mi = i;
    for (int j = i; j < array.size(); j++) {
      if (array[i] > 0)
        continue;

      if (array[j] > array[mi]) {
        mi = j;
      }
    }
    if (mi != i) {
      // swap
      int t1 = array[mi];
      int t2 = array[i];
      array[mi] = t2;
      array[i] = t1;
    }
  }
  // sort positive ascending
  for (int i = 0; i < array.size(); i++) {
    if (array[i] < 0)
      continue;

    int mi = i;
    for (int j = i; j < array.size(); j++) {
      if (array[i] < 0)
        continue;

      if (array[j] < array[mi]) {
        mi = j;
      }
    }
    if (mi != i) {
      // swap

      int t1 = array[mi];
      int t2 = array[i];
      array[mi] = t2;
      array[i] = t1;
    }
  }
  return array;
}

vector<float> exercise264(vector<float> a, vector<float> b) {
  vector<float> result;
  int i = 0;
  int j = 0;
  while (i != a.size() - 1 || j != b.size() - 1) {
    if (i == a.size() - 1 && j < b.size() - 1) {
      result.push_back(b[j]);
      j++;
    } else if (j == b.size() - 1 && i < a.size()) {
      result.push_back(a[i]);
      i++;
    } else {
      if (a[i] > b[j]) {
        result.push_back(b[j]);
        j++;
      } else {
        result.push_back(a[i]);
        i++;
      }
    }
  }
  return result;
}

vector<float> exercise265(vector<float> a, vector<float> b) {
  vector<float> result;
  int i = a.size() - 1;
  int j = b.size() - 1;
  while (i != 0 || j != 0) {
    if (i == 0 && j > 0) {
      result.push_back(b[j]);
      j--;
    } else if (j == 0 && i > 0) {
      result.push_back(a[i]);
      i--;
    } else {
      if (a[i] > b[j]) {
        result.push_back(a[i]);
        i--;
      } else {
        result.push_back(b[j]);
        j--;
      }
    }
  }
  return result;
}

vector<float> exercise266(vector<float> array, float value, int k) {
  vector<float>::iterator it = array.begin();
  array.insert(it + k, value);
  return array;
}

// exercise267 : skip - using insertion sort with binary search
// exercise268 : dont get the ideal of instructions
// using binary search with insertion
vector<float> exercise269(vector<float> array, float value) {
  int l = 0;
  int h = array.size() - 1;
  int m = -1;
  int k = -1;

  while (l < h) {
    m = (h + l) / 2;
    if (array[m] == value) {
      k = m;
      break;
    } else if (array[m] > value) {
      h = m - 1;
    } else if (array[m] < value) {
      l = m + 1;
    }
  }
  if (k == -1)
    k = l;

  return exercise266(array, value, k);
}
// exercise270 : like 267 or sort after finish input
void exercise271(vector<float> &array, int k) {
  array.erase(array.begin() + k);
}

void exercise272(vector<float> &array) {
  float max_value = -10000000000;
  vector<int> max_index;
  for (int i = 0; i < array.size(); i++) {
    if (array[i] > max_value) {
      max_value = array[i];
      max_index.clear();
    } else if (abs(array[i] - max_value) < 1e-9) {
      max_index.push_back(i);
    }
  }

  for (int i = 0; i < max_index.size(); i++) {
    array.erase(array.begin() + (max_index[i] - i));
  }
}

void exercise273(vector<float> &array) {
  vector<int> negative_index;
  for (int i = 0; i < array.size(); i++) {
    if (array[i] > 0) {
      negative_index.push_back(i);
    }
  }
  for (int i = 0; i < negative_index.size(); i++) {
    array.erase(array.begin() + (negative_index[i] - i));
  }
}

void exercise274(vector<int> &array) {
  vector<int> negative_index;
  for (int i = 0; i < array.size(); i++) {
    if (array[i] % 2 == 0) {
      negative_index.push_back(i);
    }
  }
  for (int i = 0; i < negative_index.size(); i++) {
    array.erase(array.begin() + (negative_index[i] - i));
  }
}

void exercise275(vector<int> &array) {
  vector<int> negative_index;
  for (int i = 0; i < array.size(); i++) {
    if (is_square(array[i])) {
      negative_index.push_back(i);
    }
  }
  for (int i = 0; i < negative_index.size(); i++) {
    array.erase(array.begin() + (negative_index[i] - i));
  }
}

void exercise276(vector<float> &array, float x) {
  vector<int> negative_index;
  for (int i = 0; i < array.size(); i++) {
    if (abs(array[i] - x) < 1e-9) {
      negative_index.push_back(i);
    }
  }
  for (int i = 0; i < negative_index.size(); i++) {
    array.erase(array.begin() + (negative_index[i] - i));
  }
}

void exercise277(vector<int> &array) {
  vector<int> negative_index;
  for (int i = 0; i < array.size(); i++) {
    if (is_prime(array[i])) {
      negative_index.push_back(i);
    }
  }
  for (int i = 0; i < negative_index.size(); i++) {
    array.erase(array.begin() + (negative_index[i] - i));
  }
}

vector<float> exercise278(vector<float> &array) {
  unordered_set<float> s(array.begin(), array.end());
  vector<float> result(s.begin(), s.end());
  return result;
}

// 279 similar to 278

vector<float> exercise280(const vector<float> &array) {
  vector<float> result;
  for (const auto item : array) {
    if (item == 1)
      result.push_back(1);
  }
  for (const auto item : array) {
    if (item != 1)
      result.push_back(item);
  }
  return result;
}

vector<int> exercise281(const vector<int> &array) {
  vector<int> result;
  for (const auto item : array) {
    if (item % 2 == 0) {
      result.push_back(item);
    }
  }
  for (const auto item : array) {
    if (item == 0) {
      result.push_back(0);
    }
  }
  for (const auto item : array) {
    if (item % 2 == 1) {
      result.push_back(item);
    }
  }
  return result;
}

vector<int> exercise282(const vector<int> &array) {
  vector<int> result(array.begin(), array.end());
  int index = 0;
  int temp = 0;
  for (int i = 0; i < result.size(); i++) {

    if (result[i] % 3 == 0) {
      temp = result[index];
      result[index] = result[i];
      result[i] = temp;
      index++;
    }
  }
  return result;
}

vector<int> exercise283(const vector<int> &array) {

  vector<int> result(array.begin(), array.end());
  reverse(result.begin(), result.end());
  return result;
}

vector<int> exercise284(const vector<int> &array) {
  vector<int> result(array.begin(), array.end());

  vector<int> index_of;
  int temp = 0;
  for (int i = 0; i < result.size(); i++) {
    if (result[i] % 2 == 0) {
      index_of.push_back(i);
    }
  }

  int last = index_of.size() - 1;
  int first = 0;
  while (first != last && first != last - 1) {
    temp = result[index_of[first]];
    result[index_of[first]] = result[index_of[last]];
    result[index_of[last]] = temp;
    last--;
    first++;
  }
  return result;
}

vector<int> exercise285(const vector<int> &array) {
  vector<int> result(array.begin(), array.end());

  vector<int> index_of;
  int temp = 0;
  for (int i = 0; i < result.size(); i++) {
    if (result[i] > 0) {
      index_of.push_back(i);
    }
  }
  int last = index_of.size() - 1;
  int first = 0;
  while (first != last && first != last - 1) {
    temp = result[index_of[first]];
    result[index_of[first]] = result[index_of[last]];
    result[index_of[last]] = temp;
    last--;
    first++;
  }
  return result;
}

vector<int> exercise286(const vector<int> &array) {
  vector<int> result;
  for (int i = 1; i < array.size(); i++) {
    result.push_back(array[i]);
  }
  result.push_back(array[0]);
  return result;
}

vector<int> exercise287(const vector<int> &array, int k) {
  vector<int> result;
  int size = array.size() - 1;
  for (int i = 0; i < k; i++) {
    result.push_back(size - k + i);
  }
  for (int i = 0; i < array.size() - k; i++) {
    result.push_back(array[i]);
  }
  return result;
}

// 288 & 289 are so easy, keyword for colorized output is ANSI escape character

vector<int> exercise290(const vector<int> &array) {

  vector<int> result(array.begin(), array.end());

  vector<int> index_of_even;
  vector<int> index_of_odd;
  int temp = 0;
  for (int i = 0; i < result.size(); i++) {
    if (result[i] % 2 == 0) {
      index_of_even.push_back(i);
    } else {
      index_of_odd.push_back(i);
    }
  }

  int last = index_of_even.size() - 1;
  int first = 0;
  while (first != last && first != last - 1) {
    temp = result[index_of_even[first]];
    result[index_of_even[first]] = result[index_of_even[last]];
    result[index_of_even[last]] = temp;
    last--;
    first++;
  }
  last = index_of_even.size() - 1;
  first = 0;
  while (first != last && first != last - 1) {
    temp = result[index_of_odd[first]];
    result[index_of_odd[first]] = result[index_of_odd[last]];
    result[index_of_odd[last]] = temp;
    last--;
    first++;
  }
  return result;
}
vector<float> exercise291(const vector<float> &array) {
  float max_value = -1000000000;
  float min_value = 1000000000.0;
  for (int i = 0; i < array.size(); i++) {
    if (array[i] > max_value) {
      max_value = array[i];
    } else if (array[i] < min_value) {
      min_value = array[i];
    }
  }
  vector<float> result(array.begin(), array.end());
  for (int i = 0; i < result.size(); i++) {
    if (abs(result[i] - max_value) < 1e-6) {
      result[i] = min_value;
    } else if (abs(result[i] - min_value) < 1e-6) {
      result[i] = max_value;
    }
  }
  return result;
}
vector<float> exercise292(const vector<float> &array) {
  vector<float> result(array.begin(), array.end());
  for (int i = 0; i < result.size(); i++) {
    result[i] = (int)result[i];
  }
  return result;
}

// 293 - 310 is complicated because we need to list everything (so annoying), so stop!
