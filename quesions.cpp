 Problem: Shortest Path in a Circular Array

You are given a circular array of N unique integers. Since the array is circular, after the last element comes the first element again.

Given a start element and a target element, determine the shortest path required to reach the target from the start by moving either:

Clockwise (towards increasing indices, wrapping around if necessary), or
Anticlockwise (towards decreasing indices, wrapping around if necessary).

Print the direction that requires the minimum number of steps along with the number of steps.

If both directions require the same number of steps, print BOTH followed by the number of steps.

Input Format
N
A1 A2 A3 ... AN
start target
Output Format
CLOCKWISE steps

or

ANTICLOCKWISE steps

or

BOTH steps
Constraints
2 ≤ N ≤ 10^5
All array elements are unique.
start and target are guaranteed to exist in the array.
Sample Input 1
5
10 20 30 40 50
20 50
Sample Output 1
ANTICLOCKWISE 2

Explanation:

Clockwise:

20 → 30 → 40 → 50

Steps = 3

Anticlockwise:

20 → 10 → 50

Steps = 2

Hence, the shortest path is ANTICLOCKWISE.

Sample Input 2
5
10 20 30 40 50
50 20
Sample Output 2
CLOCKWISE 2
Sample Input 3
6
1 2 3 4 5 6
1 4
Sample Output 3
BOTH 3

Explanation:

Clockwise: 1 → 2 → 3 → 4 = 3 steps
Anticlockwise: 1 → 6 → 5 → 4 = 3 steps

Both directions require the same number of steps.

_____________________________________________________________________________________________________________________________________________________________________________________________________
_____________________________________________________________________________________________________________________________________________________________________________________________________
_____________________________________________________________________________________________________________________________________________________________________________________________________
CODE->>>

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,clk=0,anclc=0,difidx=0, start, target, startidx,targetidx;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	cin>>start>>target;
	for(int i=0;i<n;i++){
	    if(arr[i]==start){
	        startidx=i;
	    }
	    if(arr[i]==target){
	        targetidx=i;
	    }
	}
	cout<< "startidx "<<startidx<<" targetidx "<<targetidx<<endl;
	clk=(targetidx - startidx + n)%n;
	anclc=(startidx - targetidx + n )%n;
	cout<<"CLOCKWISE "<<clk<<endl;
	cout<<"ANTICLOCK-WISE "<<anclc<<endl;
	if(anclc<clk){
	    cout<<"ANTICLOCK-WISE "<<anclc<<endl;
	}
	if(clk<anclc){
	    cout<<"CLOCKWISE "<<clk<<endl;
	}
return 0;
}

_____________________________________________________________________________________________________________________________________________________________________________________________________
_____________________________________________________________________________________________________________________________________________________________________________________________________
_____________________________________________________________________________________________________________________________________________________________________________________________________

