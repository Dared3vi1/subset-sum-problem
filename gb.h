//
// Created by Max on 20.12.2021.
//

#ifndef SUBSET_SUM_GB_H
#define SUBSET_SUM_GB_H

#include "./includes.h"
#include "./cansum.h"

void naive_test(benchmark::State &state);

void hs_test(benchmark::State &state);

void dynamic_test(benchmark::State &state);

void test_naive_algo();

void test_hs_algo();

void test_dynamic_algo();


#endif //SUBSET_SUM_GB_H
