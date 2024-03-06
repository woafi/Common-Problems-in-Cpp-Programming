#include <iostream>
#include <limits>

void maxmin_divide_and_conquer(int arr[], int start, int stop, int &min, int & max)
{
    if (start == stop)
    {
        min = max = arr[start];
    }
    else
    {
        int midpoint = (start + stop) / 2;

        int leftMin;
        int leftMax;
        int rightMin;
        int rightMax;

        maxmin_divide_and_conquer(arr, start, midpoint, leftMin, leftMax);
        maxmin_divide_and_conquer(arr, midpoint + 1, stop, rightMin, rightMax);

        if (leftMin < rightMin)
            min = leftMin;
        else
            min = rightMin;

        if (leftMax > rightMax)
            max = leftMax;
        else
            max = rightMax;
    }
}

int main()
{
    const int size = 10;
    int arr[size] = { 99, 34, 15, 17, 19, 26, 18, 783, 14, -6 };

    int min;
    int max;
    maxmin_divide_and_conquer(arr, 0, size - 1, min, max);

    std::cout << "Divide and Conquer recursive --- " << '\n';
    std::cout << "Minimum is: " << min << '\n' << "Maximum is: " << max << "\n\n";

    return 0;
}