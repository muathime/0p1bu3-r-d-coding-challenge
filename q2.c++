// Challenge : 2

/*Given an array containing the rate of discharge of an electric vehicle which 2
contiguous rate of discharge elements in the array will have the highest
average. Create a function that will accept the array as a parameter and return
the highest average between 2 contiguous elements.*/

/* Antony Munyao
25th Jan 2021*/

#include <algorithm>
#include <iostream>
using namespace std;

// Interval begin - end
struct Interval
{
	int begin;
	int end;
};

// sort two intervals with help of this library function std::sort()
bool checkInterval(Interval i1, Interval i2)
{
	return (i1.begin < i2.begin) ? true : false;
}

// check overlap
bool checkOverlap(Interval arr[], int n)
{
	// Sort intervals ascending
	sort(arr, arr + n, checkInterval);

	for (int i = 1; i < n; i++)
		if (arr[i - 1].end > arr[i].begin)
			return true;

	// if it gets here then there is no overlap
	return false;
}

int main()
{
	Interval input_array[] = {{6, 7}, {2, 4}, {8, 12}};
	int n1 = sizeof(input_array) / sizeof(input_array[0]);

	// False == Bike cannot be booked because there is an overlap
	// True == Bike available to be booked for all sessions becos there is no overlap

	checkOverlap(input_array, n1) ? cout << std::boolalpha << false : cout << std::boolalpha << true; 

	return 0;
}
