// Challenge : 1

/*Create a function that will accept the input_arrayay as a parameter and return
the highest average between 2 contiguous elements.*/

/* Antony Munyao
25th Jan 2021*/

#include<bits/stdc++.h> 
using namespace std; 

// First get the Largest contigous pair 
vector<int> largestPair(int input_array[], int n) 
{ 

	// Continous pair 
	vector<int>pair; 

	int minimun_summed = INT_MIN; //Then negate INT_MIN

	for(int i = 1; i < n; i++) 
	{ 

		// Checking for max value 
		if( minimun_summed < (input_array[i] + input_array[i - 1])) 
		{ 
			minimun_summed = input_array[i] + input_array[i - 1]; 
			if (pair.empty()) 
			{ 

				// Add to pair 
				pair.push_back(input_array[i - 1]); 
				pair.push_back(input_array[i]); 
			} 
			else
			{ 

				// Updating pair 
				pair[0] = input_array[i - 1]; 
				pair[1] = input_array[i]; 
			} 
		} 
	} 
	return pair; 
} 

// Driver code 
int main() 
{ 
int input_array[] = {2, 3, 4, 1, 5}; 
float n = sizeof(input_array) / sizeof(input_array[0]); 
	
vector<int>pair = largestPair(input_array, n); 

//Get the average of the largest contigous pair
cout << float(pair[0] + pair[1])/2; 
} 
