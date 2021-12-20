//
// Created by Max on 20.12.2021.
//

#ifndef SUBSET_SUM_CANSUM_H
#define SUBSET_SUM_CANSUM_H

#include "./includes.h"


using namespace std;

namespace canSum {
    // The most naive algorithm
    bool most_naive_algo(const long long &T, const vector<long long> &S);

    // Horowitz-Sahni algorithm
    bool
    horowitz_sahni_algo(const long long &T, const vector<long long> &S);

    // Dynamic programming algorithm
    bool dynamic_algo(const long long &T, const vector<long long> &S);


// Helpers
    void print_set(const vector<long long> &S);

    vector<long long> all_possible_sums(const vector<long long> &set);

    template<typename T>
    void print_table(const vector<vector<T>> &table) {
        cout << "Printing table:" << endl;
        for (const auto &line: table) {
            for (const auto &el: line) {
                cout << setw(4) << setprecision(3) << fixed;
                cout << el << " ";
            }
            cout << endl;
        }
    }

}


#endif //SUBSET_SUM_CANSUM_H
