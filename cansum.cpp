//
// Created by Max on 20.12.2021.
//

#include "cansum.h"


namespace canSum {


    // The most naive algorithm
    bool most_naive_algo(const long long &T, const vector<long long> &S) {
        auto set_size = S.size();
        unsigned long long all_possible_variants_n = 1 << set_size;
        for (unsigned long long variants_n = 1;
             variants_n < all_possible_variants_n; variants_n++) {
            bool tmp;
            long long sum = 0;
            for (size_t i = 0; i < set_size; i++) {
                tmp = (variants_n >> i) & 0b1;
                if (tmp)
                    sum += S.at(i);
            }
            if (sum == T) {
                return true;
            }
        }
        return false;
    }

    // Horowitz and Sahni
    bool
    horowitz_sahni_algo(const long long &T, const vector<long long> &S) {
        // Split set to two parts
        vector<long long> S1;
        vector<long long> S2;
        for (unsigned int i = 0; i < S.size() / 2; i++)
            S1.push_back(S.at(i));
        for (unsigned int i = (S.size() / 2); i < S.size(); i++)
            S2.push_back(S.at(i));
//        cout << S1.size() << " " << S2.size() << endl;

        auto sums1 = all_possible_sums(S1);
        auto sums2 = all_possible_sums(S2);

        sort(sums1.begin(), sums1.end(), [](long long a1, long long a2) {
            return a1 > a2;
        });
        sort(sums2.begin(), sums2.end(),
             [](long long a1, long long a2) {
                 return a1 < a2;
             });

        for (const auto &sum1: sums1) {
            for (const auto &sum2: sums2) {
                auto tmp = sum1 + sum2;
                if (tmp == T) return true;
                if (tmp > T) break;
            }
        }
        return false;
    }


    // Dynamic programming algorithm
    bool dynamic_algo(const long long &T, const vector<long long> &S) {
        vector<vector<bool>> table(S.size() + 1, vector<bool>(T + 1));

        // Fill the table
        for (long i = 0; i < table.size(); i++) {
            for (long j = 0; j < table.at(0).size(); j++) {
                if (j == 0) {
                    table.at(i).at(j) = true;
                    continue;
                }
                if (i == 0) {
                    table.at(i).at(j) = false;
                    continue;
                }
                if (table.at(i - 1).at(j)) {
                    table.at(i).at(j) = true;
                } else if (j - S.at(i - 1) < 0) {
                    table.at(i).at(j) = false;
                } else {
                    auto ij = j - S.at(i - 1);
                    table.at(i).at(j) = table.at(i - 1).at(j - S.at(i - 1));
                }
            }
        }
        return table.at(table.size() - 1).at(table.at(0).size() - 1);
    }

    void print_set(const vector<long long> &S) {
        cout << "Printing set: \n";
        for (const auto &el: S) {
            cout << el << " ";
        }
        cout << endl;
    }

    vector<long long> all_possible_sums(const vector<long long> &set) {
        unsigned long long pos_variants = 1 << set.size();
        vector<long long> sums(pos_variants - 1);
        for (unsigned long long i = 1; i < pos_variants; i++) {
            bool tmp;
            long long sum = 0;
            for (size_t j = 0; j < set.size(); j++) {
                tmp = (i >> j) & 0b1;
                if (tmp)
                    sum += set[j];
            }
            sums[i - 1] = sum;
        }
        return sums;
    }


}