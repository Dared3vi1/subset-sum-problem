//
// Created by Max on 20.12.2021.
//

#include "gb.h"

using namespace std;
using namespace canSum;

void naive_test(benchmark::State &state) {
    long long target_sum = state.range(0);
    long long size = state.range(1);
    vector<long long> set;
    for (size_t i = 2; i < 2 + size; i++) {
        set.push_back(state.range(i));
    }
    for (auto _: state) {
        most_naive_algo(target_sum, set);
    }
}

void hs_test(benchmark::State &state) {
    long long target_sum = state.range(0);
    long long size = state.range(1);
    vector<long long> set;
    for (size_t i = 2; i < 2 + size; i++) {
        set.push_back(state.range(i));
    }
    for (auto _: state) {
        horowitz_sahni_algo(target_sum, set);
    }
}

void dynamic_test(benchmark::State &state) {
    long long target_sum = state.range(0);
    long long size = state.range(1);
    vector<long long> set;
    for (size_t i = 2; i < 2 + size; i++) {
        set.push_back(state.range(i));
    }
    for (auto _: state) {
        dynamic_algo(target_sum, set);
    }
}

void test_naive_algo() {
    benchmark::RegisterBenchmark("naive_5el", naive_test)->Args(
            {-1, 5, 1, 2, 3, 4, 5});
    benchmark::RegisterBenchmark("naive_6el", naive_test)->Args(
            {-1, 6, 1, 2, 3, 4, 5, 6});
    benchmark::RegisterBenchmark("naive_7el", naive_test)->Args(
            {-1, 7, 1, 2, 3, 4, 5, 6, 7});
    benchmark::RegisterBenchmark("naive_8el", naive_test)->Args(
            {-1, 8, 1, 2, 3, 4, 5, 6, 7, 8});
    benchmark::RegisterBenchmark("naive_9el", naive_test)->Args(
            {-1, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9});
    benchmark::RegisterBenchmark("naive_10el", naive_test)->Args(
            {-1, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
    benchmark::RegisterBenchmark("naive_11el", naive_test)->Args(
            {-1, 11, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11});
    benchmark::RegisterBenchmark("naive_12el", naive_test)->Args(
            {-1, 12, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12});
    benchmark::RegisterBenchmark("naive_13el", naive_test)->Args(
            {-1, 13, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13});
    benchmark::RegisterBenchmark("naive_14el", naive_test)->Args(
            {-1, 14, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14});
    benchmark::RegisterBenchmark("naive_15el", naive_test)->Args(
            {-1, 15, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15});
    benchmark::RegisterBenchmark("naive_16el", naive_test)->Args(
            {-1, 16, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16});
    benchmark::RegisterBenchmark("naive_17el", naive_test)->Args(
            {-1, 17, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
             17});
    benchmark::RegisterBenchmark("naive_18el", naive_test)->Args(
            {-1, 18, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
             18});
    benchmark::RegisterBenchmark("naive_19el", naive_test)->Args(
            {-1, 19, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
             18, 19});
    benchmark::RegisterBenchmark("naive_20el", naive_test)->Args(
            {-1, 20, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
             18, 19, 20});
    benchmark::RegisterBenchmark("naive_21el", naive_test)->Args(
            {-1, 21, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
             18, 19, 20, 21});
    benchmark::RegisterBenchmark("naive_22el", naive_test)->Args(
            {-1, 22, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
             18, 19, 20, 21, 22});
    benchmark::RegisterBenchmark("naive_23el", naive_test)->Args(
            {-1, 23, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
             18, 19, 20, 21, 22, 23});
    benchmark::RegisterBenchmark("naive_24el", naive_test)->Args(
            {-1, 24, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
             18, 19, 20, 21, 22, 23, 24});
    benchmark::RegisterBenchmark("naive_25el", naive_test)->Args(
            {-1, 25, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
             18, 19, 20, 21, 22, 23, 24, 25});
    benchmark::RegisterBenchmark("naive_26el", naive_test)->Args(
            {-1, 26, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
             18, 19, 20, 21, 22, 23, 24, 25, 26});
    benchmark::RegisterBenchmark("naive_27el", naive_test)->Args(
            {-1, 27, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
             18, 19, 20, 21, 22, 23, 24, 25, 26, 27});
    benchmark::RegisterBenchmark("naive_28el", naive_test)->Args(
            {-1, 28, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
             18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28});
    benchmark::RegisterBenchmark("naive_29el", naive_test)->Args(
            {-1, 29, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
             18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29});
}

void test_hs_algo() {
    benchmark::RegisterBenchmark("hs_5el", hs_test)->Args(
            {-1, 5, 1, 2, 3, 4, 5});
    benchmark::RegisterBenchmark("hs_6el", hs_test)->Args(
            {-1, 6, 1, 2, 3, 4, 5, 6});
    benchmark::RegisterBenchmark("hs_7el", hs_test)->Args(
            {-1, 7, 1, 2, 3, 4, 5, 6, 7});
    benchmark::RegisterBenchmark("hs_8el", hs_test)->Args(
            {-1, 8, 1, 2, 3, 4, 5, 6, 7, 8});
    benchmark::RegisterBenchmark("hs_9el", hs_test)->Args(
            {-1, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9});
    benchmark::RegisterBenchmark("hs_10el", hs_test)->Args(
            {-1, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
    benchmark::RegisterBenchmark("hs_11el", hs_test)->Args(
            {-1, 11, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11});
    benchmark::RegisterBenchmark("hs_12el", hs_test)->Args(
            {-1, 12, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12});
    benchmark::RegisterBenchmark("hs_13el", hs_test)->Args(
            {-1, 13, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13});
    benchmark::RegisterBenchmark("hs_14el", hs_test)->Args(
            {-1, 14, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14});
    benchmark::RegisterBenchmark("hs_15el", hs_test)->Args(
            {-1, 15, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15});
    benchmark::RegisterBenchmark("hs_16el", hs_test)->Args(
            {-1, 16, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16});
    benchmark::RegisterBenchmark("hs_17el", hs_test)->Args(
            {-1, 17, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
             17});
    benchmark::RegisterBenchmark("hs_18el", hs_test)->Args(
            {-1, 18, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
             18});
    benchmark::RegisterBenchmark("hs_19el", hs_test)->Args(
            {-1, 19, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
             18, 19});
    benchmark::RegisterBenchmark("hs_20el", hs_test)->Args(
            {-1, 20, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
             18, 19, 20});
    benchmark::RegisterBenchmark("hs_21el", hs_test)->Args(
            {-1, 21, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
             18, 19, 20, 21});
    benchmark::RegisterBenchmark("hs_22el", hs_test)->Args(
            {-1, 22, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
             18, 19, 20, 21, 22});
    benchmark::RegisterBenchmark("hs_23el", hs_test)->Args(
            {-1, 23, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
             18, 19, 20, 21, 22, 23});
    benchmark::RegisterBenchmark("hs_24el", hs_test)->Args(
            {-1, 24, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
             18, 19, 20, 21, 22, 23, 24});
    benchmark::RegisterBenchmark("hs_25el", hs_test)->Args(
            {-1, 25, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
             18, 19, 20, 21, 22, 23, 24, 25});
    benchmark::RegisterBenchmark("hs_26el", hs_test)->Args(
            {-1, 26, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
             18, 19, 20, 21, 22, 23, 24, 25, 26});
    benchmark::RegisterBenchmark("hs_27el", hs_test)->Args(
            {-1, 27, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
             18, 19, 20, 21, 22, 23, 24, 25, 26, 27});
    benchmark::RegisterBenchmark("hs_28el", hs_test)->Args(
            {-1, 28, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
             18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28});
    benchmark::RegisterBenchmark("hs_29el", hs_test)->Args(
            {-1, 29, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
             18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29});
    benchmark::RegisterBenchmark("hs_30el", hs_test)->Args(
            {-1, 29, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
             18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30});
}

void test_dynamic_algo() {
    benchmark::RegisterBenchmark("dynamic_5el", dynamic_test)->Args(
            {100, 5, 1, 2, 3, 4, 5});
    benchmark::RegisterBenchmark("dynamic_6el", dynamic_test)->Args(
            {100, 6, 1, 2, 3, 4, 5, 6});
    benchmark::RegisterBenchmark("dynamic_7el", dynamic_test)->Args(
            {100, 7, 1, 2, 3, 4, 5, 6, 7});
    benchmark::RegisterBenchmark("dynamic_8el", dynamic_test)->Args(
            {100, 8, 1, 2, 3, 4, 5, 6, 7, 8});
    benchmark::RegisterBenchmark("dynamic_9el", dynamic_test)->Args(
            {100, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9});
    benchmark::RegisterBenchmark("dynamic_10el", dynamic_test)->Args(
            {100, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
    benchmark::RegisterBenchmark("dynamic_11el", dynamic_test)->Args(
            {100, 11, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11});
    benchmark::RegisterBenchmark("dynamic_12el", dynamic_test)->Args(
            {100, 12, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12});
    benchmark::RegisterBenchmark("dynamic_13el", dynamic_test)->Args(
            {100, 13, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13});
    benchmark::RegisterBenchmark("dynamic_14el", dynamic_test)->Args(
            {100, 14, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14});
    benchmark::RegisterBenchmark("dynamic_15el", dynamic_test)->Args(
            {100, 15, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15});
    benchmark::RegisterBenchmark("dynamic_16el", dynamic_test)->Args(
            {100, 16, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16});
    benchmark::RegisterBenchmark("dynamic_17el", dynamic_test)->Args(
            {100, 17, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
             17});
    benchmark::RegisterBenchmark("dynamic_18el", dynamic_test)->Args(
            {100, 18, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
             17,
             18});
    benchmark::RegisterBenchmark("dynamic_19el", dynamic_test)->Args(
            {100, 19, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
             17,
             18, 19});
    benchmark::RegisterBenchmark("dynamic_20el", dynamic_test)->Args(
            {100, 20, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
             17,
             18, 19, 20});
    benchmark::RegisterBenchmark("dynamic_21el", dynamic_test)->Args(
            {100, 21, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
             17,
             18, 19, 20, 21});
    benchmark::RegisterBenchmark("dynamic_22el", dynamic_test)->Args(
            {100, 22, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
             17,
             18, 19, 20, 21, 22});
    benchmark::RegisterBenchmark("dynamic_23el", dynamic_test)->Args(
            {100, 23, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
             17,
             18, 19, 20, 21, 22, 23});
    benchmark::RegisterBenchmark("dynamic_24el", dynamic_test)->Args(
            {100, 24, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
             17,
             18, 19, 20, 21, 22, 23, 24});
    benchmark::RegisterBenchmark("dynamic_25el", dynamic_test)->Args(
            {100, 25, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
             17,
             18, 19, 20, 21, 22, 23, 24, 25});
    benchmark::RegisterBenchmark("dynamic_26el", dynamic_test)->Args(
            {100, 26, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
             17,
             18, 19, 20, 21, 22, 23, 24, 25, 26});
    benchmark::RegisterBenchmark("dynamic_27el", dynamic_test)->Args(
            {100, 27, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
             17,
             18, 19, 20, 21, 22, 23, 24, 25, 26, 27});
    benchmark::RegisterBenchmark("dynamic_28el", dynamic_test)->Args(
            {100, 28, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
             17,
             18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28});
    benchmark::RegisterBenchmark("dynamic_29el", dynamic_test)->Args(
            {100, 29, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
             17,
             18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29});
    benchmark::RegisterBenchmark("dynamic_30el", dynamic_test)->Args(
            {100, 29, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
             17,
             18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30});
}