Problem Description:
You work in a warehouse that stacks items in columns of boxes. Each column has boxes of different weights, and your task is to find the maximum weight that can be stacked without exceeding a weight limit. Given N columns and a weight limit, determine the maximum number of boxes you can stack by choosing one box from each column, such that the total weight is within the weight limit.

Input:
The first line contains two integers N (number of columns) and W (the weight limit).
The next N lines contain integers, each line representing the weights of boxes in a column. The number of boxes in each column may vary, but there will be at least one box per column.
Output:
A single integer representing the maximum number of boxes that can be stacked without exceeding the weight limit. If no valid combination exists, return -1.
Constraints:
1
≤
𝑁
≤
10
1≤N≤10
1
≤
𝑊
≤
1000
1≤W≤1000
Each box weight is between 1 and 100.