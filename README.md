# Subset sum problem
The **subset sum problem (SSP)** is a decision problem in computer science. In its most general formulation, there is a multiset _S_ of integers and a target-sum _T_, and the question is to decide whether any subset of the integers sum to precisely _T_. The problem is known to be NP-complete.
## Naive solution
The most naive algorithm would be to cycle through all subsets of _n_ numbers and, for every one of them, check if the subset sums to the right number. The running time is of order O(2^n * n), since there are 2^n subsets and, to check each subset, we need to sum at most _n_ elements.

## Horowitz-Sahni solution
Horowitz and Sahni published a faster exponential-time algorithm, which runs in time O(2^(n/2) * (n/2)), but requires much more space O(2^(n/2)). The algorithm splits arbitrarily the n elements into two sets of n/2 each. For each of these two sets, it stores a list of the sums of all 2^(n/2) possible subsets of its elements. Each of these two lists is then sorted. Given the two sorted lists, the algorithm can check if an element of the first array and an element of the second array sum up to T in time {\displaystyle O(2^(n/2)). To do that, the algorithm passes through the first array in decreasing order (starting at the largest element) and the second array in increasing order (starting at the smallest element). Whenever the sum of the current element in the first array and the current element in the second array is more than T, the algorithm moves to the next element in the first array. If it is less than T, the algorithm moves to the next element in the second array. If two elements that sum to T are found, it stops.

## Dynamic programming solution
2D array of size (arr.size() + 1) * (target + 1) of type boolean will be created. The state
DP[i][j] will be true if there exists a subset of elements from A[0….i] with sum value = ‘j’.
This means that if current element has value greater than ‘current sum value’ we will copy
the answer for previous cases. And if the current sum value is greater than the ‘ith’ element
we will see if any of previous states have already experienced the sum=’j’ OR any previous
states experienced a value ‘j – A[i]’ which will solve our purpose.

Time Complexity: O(sum*n), where sum is the ‘target sum’ and ‘n’ is the size of array.

