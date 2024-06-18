#include <iostream>
#include <cmath>

using namespace std;

// Function to get the maximum value in an array
int getMax(int arr[], int size) {
  int max = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

// Function to get the minimum value in an array
int getMin(int arr[], int size) {
  int min = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  return min;
}

// Function to calculate the average value of an array
double getAverage(int arr[], int size) {
  double sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  if (size != 0) {
    return sum / size;
  }
  return 0; // if the array is empty to avoid division by zero
}

// Function to calculate the variance of an array
double getVariance(int arr[], int size, double average) {
  double sumSquaredDiffs = 0;
  for (int i = 0; i < size; i++) {
    double diff = arr[i] - average;
    sumSquaredDiffs += diff * diff;
  }
  return sumSquaredDiffs / (size - 1);
}

// Function to calculate the standard deviation of an array
double getStdDev(int arr[], int size, double average) {
  double sumSquaredDiffs = 0;
  for (int i = 0; i < size; i++) {
    double diff = arr[i] - average;
    sumSquaredDiffs += diff * diff;
  }
  double variance = sumSquaredDiffs / (size - 1);
  return sqrt(variance);
}

// Function to get user input and store it in an array
void getInput(int arr[], int &size) {
  int num;
  size = 0;
  cout << "Input an integer: ";
  while (size < 10 && cin >> num && num != 0) {
    arr[size] = num;
    size++;
    if (size < 10 && num != 0) // Check if the loop should continue
      cout << "Input an integer: ";
  }
}

// Function to display the required information
void displayOutput(int arr[], int size, int max, int min, double average, double variance, double stdDev) {
  cout << "\nLargest = " << max << endl;
  cout << "Smallest = " << min << endl;
  cout << "Average = " << average << endl;
  cout << "Standard deviation = " << stdDev << endl;
  cout << "Variance = " << variance << endl;
}

int main() {
  int nums[10];
  int size = 0;
  int max = 0;
  int min = 0;
  double average = 0;
  double variance = 0;
  double stdDev = 0;
  
  cout << "\nProgramming Exercise 05\n";
  cout << "\nSubmitted by: John Andrei Manalo\n";
  cout << "\n------------------------------------------------------------------------------------------------------------------------------------------\n";
  cout << "\nThis program will ask the user to input various numbers (positive or negative but not zero) and perform basic statistics on these numbers.\n";
  cout << "\n";
  
  getInput(nums, size);
  max = getMax(nums, size);
  min = getMin(nums, size);
  average = getAverage(nums, size);
  stdDev = getStdDev(nums, size, average);
  variance = getVariance(nums, size, average);

  displayOutput(nums, size, max, min, average, variance, stdDev);

  return 0;
}
