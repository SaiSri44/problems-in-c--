#include <iostream>
#include <string>
#include <algorithm>
// -----------------problem statement----------
// find the max sum of the sub array
// just modification in kandane algorthim

using namespace std;
int max_sum_sub_array(int *array, int length)
{
    int max_so_far = 0;
    int max_sum = 0;
    int start = 0, end = 0;
    for (int i = 0; i < length; i++)
    {
        max_so_far = max_so_far + array[i];
        if (max_so_far < array[i])
        {
            max_so_far = array[i];
        }
        if (max_so_far > max_sum)
        {
            max_sum = max_so_far;
        }
    }

    return max_sum;
}
int main()

{
    int num;
    cin >> num;
    int array[num];
    for (int i = 0; i < num; i++)
        cin >> array[i];
    cout << "the maximum sum of the sub array is : " << max_sum_sub_array(array, num) << endl;
    return 0;
}