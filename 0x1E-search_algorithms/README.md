# 0x1E. C - Search Algorithms
## Learning Objectives
What is a search algorithm?
What is a linear search?
What is a binary search?
What is the best search algorithm to use depending on your needs?

## Tasks
0. Linear search
Write a function “int linear_search(int *array, size_t size, int value);” that searches for a value in an array of integers using the Linear search algorithm, where array is a pointer to the first element of the array to search in, size is the number of elements in array and value is the value to search for. Your function must return the first index where value is located. If value is not present in array or if array is NULL, your function must return -1. Every time you compare a value in the array to the value you are searching, you have to print this value.

1. Binary search
Write a function “int binary_search(int *array, size_t size, int value);” that searches for a value in a sorted array of integers using the Binary search algorithm, where array is a pointer to the first element of the array to search in, size is the number of elements in array and value is the value to search for. Your function must return the index where value is located. You can assume that array will be sorted in ascending order. You can assume that value won’t appear more than once in array. Your function must return the index where the value is located. You can assume that array will be sorted in ascending order. You can assume that value won’t appear more than once in array. If value is not present in array or if array is NULL, your function must return -1. You must print the array being searched every time it changes (e.g. At the beginning and when you search a subarray)

2. Big O #0
What is the time complexity (worst case) of a linear search in any array of size n?

3. Big O #1
What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

4. Big O #2
What is the time complexity (worst case) of a binary search in an array of size n?

5. Big O #3
What is the space complexity (worst case) of a binary search in an array of size n?

6. Big O #4
What is the space complexity of this function/algorithm?
