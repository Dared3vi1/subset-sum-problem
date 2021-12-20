//
// Created by Max on 19.12.2021.
//
#include <iostream>
#include <vector>
#include <cmath>
#include "cansum.h"
#include "gb.h"

using namespace std;
using namespace canSum;

int main() {
    test_naive_algo();
    test_hs_algo();
    test_dynamic_algo();
    benchmark::RunSpecifiedBenchmarks();
    return 0;
}
