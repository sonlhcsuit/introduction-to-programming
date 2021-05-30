#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

int exercise001(int n) {
    int s = 0;

    for (int i = 0; i < n + 1; i++) {
        s = s + i;
    }
    return s;
}

int exercise002(int n) {
    unsigned long long sum = 0;
    for (int i = 1; i < n + 1; i++) {
        sum = sum + i * i;
    }
    return sum;
}

double exercise003(int n) {
    double sum = 0;
    for (int i = 1; i < n + 1; i++) {
        sum = sum + 1.0 / i;
    }
    return sum;
}

double exercise004(int n) {
    double sum = 0;
    for (int i = 1; i < n + 1; i++) {
        sum = sum + 1.0 / (2.0 * i);
    }
    return sum;
}

double exercise005(int n) {
    double sum = 0;
    for (int i = 0; i < n + 1; i++) {
        sum = sum + 1.0 / (2 * i + 1);
    }
    return sum;
}

double exercise006(int n) {
    double sum;
    for (int i = 0; i < n + 1; i++) {
        sum = sum + 1.0 / (i * (i + 1));
    }
    return sum;
}

double exercise007(int n) {
    double sum;
    for (float i = 1; i < n + 1; i++) {
        sum = sum + i / (i + 1);
    }

    return sum;
}

double exercise008(int n) {
    double sum = 0;
    for (float i = 1; i < n + 1; i++) {
        sum = sum + (2 * i + 1) / (2 * i + 2);
    }

    return sum;
}

unsigned long long exercise009(int n) {
    unsigned long long product = 1;
    for (int i = 0; i < n + 1; i++) {
        product = product * i;
    }
    return product;

}

unsigned long long exercise010(double x, int n) {

    if (x == 1 || x == 0 || n == 1) return x;
    if (n == 0) return 1;
    double base = x;
    int exponent = n;
//    in this case, we consider to calculate natural number power
//    For real number implementation, checkout internet
    unsigned long long answer = 1;
    for (int i = 1; i < exponent + 1; ++i) {
        answer = answer * base;
    }
    return answer;
}

unsigned long long exercise011(int n) {
    unsigned long long sum = 0;
    long long product = 1;
    for (int i = 1; i < n + 1; i++) {
        product = product * i;
        sum = sum + product;
    }
    return sum;
}

unsigned long long exercise012(int n, int x) {
    unsigned long long sum = 0;
    long long x_to_the_i = 1;
    for (int i = 1; i < n + 1; i++) {
        x_to_the_i = x_to_the_i * x;
        sum = sum + x_to_the_i;
    }
    return sum;
}

unsigned long long exercise013(int n, int x) {
    unsigned long long sum = 0;
    long long x_to_the_i = x * x;
    for (int i = 1; i < n + 1; i++) {
        sum = sum + x_to_the_i;
        x_to_the_i = x_to_the_i * x * x;
    }
    return sum;
}

unsigned long long exercise014(int n, int x) {
    unsigned long long sum = 0;
    long long x_to_the_i = x;
    for (int i = 1; i < n + 1; i++) {
        x_to_the_i = x_to_the_i * x * x;
        sum = sum + x_to_the_i;
    }
    return sum;
}

long double exercise015(int n) {
    long double sum = 0;
    double denominator = 0;
    for (int i = 1; i < n + 1; i++) {
        denominator = denominator + i;
        sum = sum + 1.0 / denominator;
    }
    return sum;
}

long double exercise016(int n, double x) {
    long double sum = 0;
    double denominator = 0;
    double x_to_the_i = 1;
    for (int i = 1; i < n + 1; i++) {
        denominator = denominator + i;
        x_to_the_i = x_to_the_i * x;
        sum = sum + x_to_the_i / denominator;
    }
    return sum;
}

long double exercise017(int n, double x) {
    long double sum = 0;
    double denominator = 1;
    double x_to_the_i = 1;
    for (int i = 1; i < n + 1; i++) {
        denominator = denominator * i;
        x_to_the_i = x_to_the_i * x;
        sum = sum + x_to_the_i / denominator;
    }
    return sum;
}

long double exercise018(int n, double x) {
    long double sum = 1;
    double denominator = 1;
    double x_to_the_i = 1;
    for (int i = 1; i < n + 1; i++) {
        denominator = denominator * (2 * i) * (2 * i - 1);
        x_to_the_i = x_to_the_i * x * x;
        sum = sum + x_to_the_i / denominator;
    }
    return sum;
}

long double exercise019(int n, double x) {
    long double sum = 1 + x;
    double denominator = 1;
    double x_to_the_i = x;
    for (int i = 1; i < n + 1; i++) {
        denominator = denominator * (2 * i) * (2 * i + 1);
        x_to_the_i = x_to_the_i * x * x;
        sum = sum + x_to_the_i / denominator;
    }
    return sum;
}

vector<int> exercise020(int n) {
    vector<int> result;
    for (int i = 2; i < n + 1; i++) {
        if (n % i == 0) {
            result.push_back(i);
        }
    }
    return result;
}

int exercise021(int n) {
    long sum = 0;
    for (int i = 1; i < n + 1; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }
    return sum;
}

long long exercise022(int n) {
    long long product = 1;
    for (int i = 2; i < n + 1; i++) {
        if (n % i == 0) {
            product = product * i;
        }
    }
    return product;
}

int exercise023(int n) {
    int count = 0;
    for (int i = 2; i < n + 1; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count;
}

vector<int> exercise024(int n) {
    vector<int> result;
    for (int i = 2; i < n + 1; i++) {
        if (n % i == 0) {
            if (i % 2 == 1) {
                result.push_back(i);
            }
        }
    }
    return result;
}

long exercise025(int n) {
    long sum = 0;
    for (int i = 2; i < n + 1; i++) {
        if (n % i == 0) {
            if (i % 2 == 0) {
                sum = sum + i;
            }
        }
    }
    return sum;
}

long long exercise026(int n) {
    long long product = 1;
    for (int i = 2; i < n + 1; i++) {
        if (n % i == 0) {
            if (i % 2 == 1) {
                product = product * i;
            }
        }
    }
    return product;
}

int exercise027(int n) {
    int count = 0;
    for (int i = 2; i < n + 1; i++) {
        if (n % i == 0) {
            if (i % 2 == 0) {
                count++;
            }
        }
    }
    return count;
}

int exercise028(int n) {
//    ex 21 calculate sum of divisor (include n)
    return exercise021(n) - n;
}

int exercise029(int n) {
//    original version, loop from 1 to n (include n) (last odd divisor is the biggest one)
//    int max_odd = 1;
//    for (int i = 1; i < n + 1; i++) {
//        if (n % i == 0) {
//            if (i % 2 == 0) {
//                max_odd = i;
//            }
//        }
//    }
//    return max_odd;

// inverse version, loop from n to 1 (first odd divisor is the biggest one)
    int max_odd = n;
    for (int i = n; n > 0; n--) {
        if (n % i == 0) {
            if (i % 2 == 0) {
                max_odd = i;
                break;
            }
        }
    }
    return max_odd;
}

bool exercise030(int n) {
// perfect number is a number which sum of its divisor equal itself (exclude itself)
// example is 6
// sum  of it's divisors : 1 + 2 + 3  (exclude itself)
// ex21 already calculate sum of divisors (include n) for us. Or better choice is ex28
    return exercise028(n) == n;
}

bool exercise031(int n) {
    if (n == 2 || n == 3 || n == 5 || n == 7) return true;
    double limit = sqrt(n);
    for (int i = 2; i < limit; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool exercise032(int n) {
    double square_root = sqrt(n);
    int integer_square_root = (int) square_root;
    if (integer_square_root * integer_square_root == n)return true;
    return false;
}

long double exercise033(int n) {
    long double sum = 0;
    for (int i = 1; i < n + 1; i++) {
        sum = sqrt(2 + sum);
    }
    return sum;
}


long double exercise034(int n) {
    long double sum = 0;
    for (int i = 1; i < n + 1; i++) {
        sum = sqrt(i + sum);
    }
    return sum;
}

long double exercise035(int n) {
    long double sum = 0;
    for (int i = 1; i < n + 1; i++) {
        sum = sqrt(n + 1 - i + sum);
    }
    return sum;
}

long double exercise036(int n) {
    long double sum = 0;
    for (int i = 1; i < n + 1; i++) {
        sum = sqrt(n + 1 - i + sum);
    }
    return sum;
}

long double exercise037(int n) {
//    nth root of x equals x to the 1/n
//    instead of calculating nth root of x, we calculate x to the 1/n
    long double sum = 0;
    for (int i = 2; i < n + 1; i++) {
        sum = pow(sum + i, 1.0 / i);
    }
    return sum;
}

long double exercise038(int n) {
//    nth root of x equals x to the 1/n
//    instead of calculating nth root of x, we calculate x to the 1/n
    long double sum = 0;
    for (int i = 1; i < n + 1; i++) {
        sum = pow(sum + i, 1.0 / (i + 1));
    }
    return sum;
}

long double exercise039(int n) {
//    nth root of x equals x to the 1/n
//    instead of calculating nth root of x, we calculate x to the 1/n
    long double sum = 0;
    int factorial = 1;
    for (int i = i; i < n + 1; i++) {
        factorial = factorial * i;
        sum = pow(sum + factorial, 1.0 / (i + 1));
    }
    return sum;
}

long double exercise040(int n, double x) {
//    nth root of x equals x to the 1/n
//    instead of calculating nth root of x, we calculate x to the 1/n
    long double sum = 0;
    long exponent = 1;
    for (int i = 2; i < n + 1; i++) {
        exponent = exponent * x;
        sum = sqrt(sum + exponent);
    }
    return sum;
}

long double exercise041(int n) {
    long double sum = 0;

    for (int i = 1; i < n + 1; i++) {
        sum = 1 / (sum + 1);
    }
    return sum;
}

int exercise042(int n) {
//    so easily to recognize that S(k) is
//    Arithmetic progression (as know as "Cap so cong") with
//    a_1 (first term) : 1
//    d (common difference) : 1
//    so we can easily calculate sum of first n terms using formula
//    S(k) = k*(a_1 + a_k)/2 with a_n can be calculated with formula
//    a_k = (k-1)*d + a_1
//    In conclusion, we just need to solve this inequality:
//    S(k) < n
//    After applying a lot transformation on this inequality, you can get
//    k^2 + k < 2n (actual form is k^2 - (2*a_1 -d)*k < 2*n, but d & a_1 is 1  )
//    using approximation here!
//    However, you can do a loop!

    int k = (int) sqrt(2 * n) - 1;
    int d = 1;
    int a_1 = 1;
    int sum_k_plus_1 = (k + 1) * k * d + a_1;
    if (sum_k_plus_1 < n) {
        return k + 1;
    }
    return k;
}

int exercise043(long long n) {
    int count = 0;
    while (n != 0) {
        count = count + 1;
        n = n / 10;
    }
    return count;
}

int exercise044(long long n) {
    int sum = 0;
    while (n != 0) {
        sum = sum + (n % 10);
        n = n / 10;
    }
    return sum;
}

long long exercise045(long long n) {
    long long product = 1;
    while (n != 0) {
        product = product * (n % 10);
        n = n / 10;
    }
    return product;
}

int exercise046(long long n) {
    int count = 0;
    while (n != 0) {
        if ((n % 10) % 2 == 1) {
            count = count + 1;
        }
        n = n / 10;
    }
    return count;
}

int exercise047(long long n) {
    int sum = 0;
    while (n != 0) {
        if ((n % 10) % 2 == 0) {
            sum = sum + n % 10;
        }
        n = n / 10;
    }
    return sum;
}

long long exercise048(long long n) {
    long long product = 1;
    while (n != 0) {
        if ((n % 10) % 2 == 1) {
            product = product * (n % 10);
        }
        n = n / 10;
    }
    return product;
}

long long exercise049(int n) {
    long long first = 0;
    while (n != 0) {
        first = n % 10;
        n = n / 10;
    }

    return first;
}

long long exercise050(long long n) {
    long long result = 0;
    while (n != 0) {
        result = result * 10 + n % 10;
        n = n / 10;
    }
    return result;

}

short exercise051(long long n) {
    short max = 0;
    while (n != 0) {
        if (n % 10 > max) {
            max = n % 10;
        }
        n = n / 10;
    }
    return max;
}

short exercise052(long long n) {
    short min = 0;
    while (n != 0) {
        if (n % 10 < min) {
            min = n % 10;
        }
        n = n / 10;
    }
    return min;
}

int exercise053(long long n) {
    short max = -10;
    int count = 0;
    while (n != 0) {
        if (n % 10 > max) {
            max = n % 10;
            count = 0;
        }
        if (n % 10 == max) {
            count++;
        }
        n = n / 10;
    }
    return count;
}

int exercise054(long long n) {
    short min = 10;
    int count = 0;
    while (n != 0) {
        if (n % 10 < min) {
            min = n % 10;
            count = 0;
        }
        if (n % 10 == min) {
            count++;
        }
        n = n / 10;
    }
    return count;
}

int exercise055(long long n) {
    int count = 0;
    int last = 10;
    long long org_n = n;
    while (org_n != 0) {
        last = org_n % 10;
        org_n = org_n / 10;
    }
    org_n = n;

    while (org_n != 0) {
        if (last == n % 10) {
            count++;
        }
        org_n = org_n / 10;
    }
    return count;
}

bool exercise056(long long n) {
    while (n != 0) {
        if ((n % 10) % 2 == 0) {
            return false;
        }
        n = n / 10;
    }
    return true;
}

bool exercise057(long long n) {
    while (n != 0) {
        if ((n % 10) % 1 == 0) {
            return false;
        }
        n = n / 10;
    }
    return true;
}

bool exercise058(long long n) {
//    duplicate with ex 56
    return exercise056(n);
}

bool exercise059(long long n) {
//    use answer from ex 50 (reversed number)
    return exercise050(n) == n;
}

bool exercise060(long long n) {
//    increase is very different with "not decrease"
    while (n != 0) {
        if (n % 10 <= (n / 10) % 10) {
            return false;
        }
        n = n / 10;
    }
    return true;
}

bool exercise061(long long n) {
    while (n != 0) {
        if (n % 10 >= (n / 10) % 10) {
            return false;
        }
        n = n / 10;
    }
    return true;
}

int exercise062(int a, int b) {
//    Euclidean algorithms
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int exercise063(int a, int b) {
    return abs(a * b) / exercise062(a, b);
}

double exercise064(double a, double b) {
    if (a == 0) return NAN;
    return -b / a;
}

vector<double> exercise065(double a, double b, double c) {
    vector<double> t;
    double delta = b * b - 4 * a * c;
    if (delta < 0) return t;
    if (delta == 0) {
        t.push_back(-b / (2 * a));
    } else if (delta > 0) {
        t.push_back((-b + sqrt(delta)) / (2 * a));
        t.push_back((-b - sqrt(delta)) / (2 * a));
    }
    return t;
}

vector<double> exercise066(double a, double b, double c) {
    vector<double> res = exercise065(a, b, c);
    vector<double> solutions;
    for (int i = 0; i < res.size(); i++) {
        if (res[i] == 0) solutions.push_back(res[i]);
        if (res[i] > 0) {
            solutions.push_back(sqrt(res[i]));
            solutions.push_back(-sqrt(res[i]));
        }
    }
    return solutions;
}

double exercise067(int n, double x) {
    double sum = 0;
    double exponent = 1;
    for (int i = 1; i < n + 1; i++) {
        exponent = exponent * x;

        sum = sum + (i % 2 == 1 ? 1 : -1) * exponent;
    }

    return sum;
}

double exercise068(int n, double x) {
    double sum = 0;
    double exponent = 1;
    for (int i = 1; i < n + 1; i++) {
        exponent = exponent * x * x;
        sum = sum + (i % 2 == 1 ? -1 : 1) * exponent;
    }
    return sum;
}

double exercise069(int n, double x) {
    double sum = x;
    double exponent = x;
    for (int i = 1; i < n + 1; i++) {
        exponent = exponent * x * x;
        sum = sum + (i % 2 == 1 ? -1 : 1) * exponent;
    }
    return sum;
}

double exercise070(int n, double x) {
    double sum = 0;
    double acc = 0;
    for (int i = 1; i < n + 1; i++) {
        acc = acc + i;
        sum = sum + (i % 2 == 1 ? 1.0 : -1.0) / acc;
    }
    return sum;
}

double exercise071(int n, double x) {
    double sum = 0;
    double acc = 0;
    double exponent = 1;
    for (int i = 1; i < n + 1; i++) {
        acc = acc + i;
        exponent = exponent * x;
        sum = sum + (i % 2 == 1 ? -1.0 : 1.0) * exponent / acc;
    }
    return sum;
}

double exercise072(int n, double x) {
    double sum = 0;
    double factorial = 1;
    double exponent = 1;
    for (int i = 1; i < n + 1; i++) {
        factorial = factorial * i;
        exponent = exponent * x;
        sum = sum + (i % 2 == 1 ? -1.0 : 1.0) * exponent / factorial;
    }
    return sum;
}

double exercise073(int n, double x) {
    double sum = -1;
    double factorial = 1;
    double exponent = 1;
    for (int i = 1; i < n + 1; i++) {
        factorial = factorial * (2 * i) * (2 * i - 1);
        exponent = exponent * x * x;
        sum = sum + (i % 2 == 1 ? 1.0 : -1.0) * exponent / factorial;
    }
    return sum;
}

double exercise074(int n, double x) {
    double sum = 1 - x;
    double factorial = 1;
    double exponent = x;
    for (int i = 1; i < n + 1; i++) {
        factorial = factorial * (2 * i) * (2 * i + 1);
        exponent = exponent * x * x;
        sum = sum + (i % 2 == 1 ? 1.0 : -1.0) * exponent / factorial;
    }
    return sum;
}

bool exercise075(int n) {
//    log a x equal log b a / log b x
    double log_2_k = log(n) / log(2);
    cout << log_2_k << "\n";
    return ((int) log_2_k) == log_2_k;
}

bool exercise076(int n){
    //    log a x equal log b a / log b x
    double log_3_k = log(n) / log(3);
    cout << log_3_k << "\n";
    return ((int) log_3_k) == log_3_k;
}

int exercise077(int n){
//    exercise 01 duplicated
    return exercise001(n);
}

vector<int> exercise078(int n){
//    exercise 20 duplicated
    return exercise020(n);
}

int exercise079(long long n){
//    exercise 43 duplicated
    return exercise043(n);
}

double exercise080(int n, double x){
//    exercise 16 duplicated
    return exercise016(n,x);
}