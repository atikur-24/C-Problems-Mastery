Problem Description:
A bus company in your city is planning routes to optimize fuel consumption. You are tasked with writing a program that calculates the shortest route between two bus stops using direct routes. There are N bus stops, and some of them are connected by roads. You must calculate the shortest distance between the source stop and the destination stop.

Input:
The first line contains two integers N (number of bus stops) and M (number of direct routes between bus stops).
The next M lines contain three integers u, v, and d, representing a direct route between bus stop u and bus stop v with a distance d.
The last line contains two integers source and destination, the bus stops where the trip starts and ends, respectively.
Output:
Print a single integer representing the shortest distance between the source and destination bus stops. If no route exists, print -1.
Constraints:
2
≤
𝑁
≤
100
2≤N≤100
1
≤
𝑑
≤
100
1≤d≤100
Bus stops are numbered from 1 to N.
