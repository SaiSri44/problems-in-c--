// problem statement
// given an array of n elements if there exists a single element or consecutive elements whose sum is zero then print 1 else print 0

// we will do this in an optmised way
// first we would find the prefix array of the given array , prefix array mean array obtained by adding the before elements
// example : let array be 1 2 3 4 then prefix array is 1 3 5 9 i.e 2nd elemenet is sum of the first and 2nd element in original array, 3rd element in prefix array is sum of first 3 elements and so on

// if any element in the prefix is repeated or zero then there exists a sub array in original array whose sum is zero and if the zero is present in the original array
// so if any of the three conditions is satisffied then there exists a sub array with sum zero

// 1.if any element repeated in prefix array
// 2.if any element is zero in prefix array
// 3.if zero is present in the original array

// Time complexity is O(N)
// Space Complexity is O(N)

#include <iostream>
#include <string>
#include <algorithm>
bool find_repeat(int *prefix, int value, int i)
{
    bool flag = false;
    for (int j = 0; j < i; j++)
    {
        if (prefix[j] == value)
        {
            std::cout << "1" << std::endl;
            flag = true;
            break;
        }
    }
    return flag;
}
int main()

{
    int num;
    std::cin >> num;
    int array[num];
    int prefix[num];
    bool flag = false;
    for (int i = 0; i < num; i++)
        std::cin >> array[i];
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum = sum + array[i];
        if (sum == 0 || array[i] == 0)
        {
            std::cout << "1" << std::endl;
            exit(0);
        }
        if (find_repeat(prefix, sum, i))
        {
            exit(0);
        } 

        prefix[i] = sum;
    } 
    std::cout << "0" << std::endl;
    // for(auto x : prefix )
    //     std::cout<<x<<std::endl;
    return 0; 
} 