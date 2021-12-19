# Subset sum problem
The **subset sum problem (SSP)** is a decision problem in computer science. In its most general formulation, there is a multiset _S_ of integers and a target-sum _T_, and the question is to decide whether any subset of the integers sum to precisely _T_. The problem is known to be NP-complete.
## Naive solution
The most naive algorithm would be to cycle through all subsets of _n_ numbers and, for every one of them, check if the subset sums to the right number. The running time is of order O(<img src="https://latex.codecogs.com/svg.image?\inline&space;2^n&space;*&space;n&space;" title="\inline 2^n * n " />), since there are <img src="https://latex.codecogs.com/svg.image?\inline&space;2^n&space;" title="\inline 2^n " /> subsets and, to check each subset, we need to sum at most _n_ elements.

