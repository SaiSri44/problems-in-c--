
#include <iostream>
#include <string>
#include <algorithm>
void sum_equal_to_zero(int *array, int num, int k)
{
    int left = 0, right = 0;
    bool flag = true;
    int sum = 0;
    int sai = 2 * num;
    // in the worst case the every element is approached twice 
    // so we ran the algorthim for maximum limit
    // the time complexity is O(N),and space complexity is O(1)
    // it only works for the positive array elements 
    while (sai--)
    {
        if (sum == k)
        {
            std::cout << "1" << std::endl;
            flag = false;
            break;
        }
        else if (k > sum && right < num)

        {
            sum = sum + array[right];
            right++;
        }

        else if (k < sum && left < right)
        {
            sum = sum - array[left];
            left++;
        } 
    } 
    if (flag)
        std::cout << "0" << std::endl; 
}

int main() 

{
    int num;
    std::cin >> num;
    int array[num];
    for (int i = 0; i < num; i++)
        std::cin >> array[i];
    int k;
    std::cout << "enter the sum" << std::endl;
    std::cin >> k;
    sum_equal_to_zero(array, num, k);
    return 0;
} 