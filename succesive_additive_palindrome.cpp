// -----------problem statement-------------
// given a number add this number with the reverse of the number and check whether it is palindrome or not, add reverse
// of this to number obtained after adding and continue this process until the palindrome is found, output the palindrome obtained
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int string_reverse(int num)
{
        string str = to_string(num) ; 
        reverse(str.begin(), str.end());
        return stoi(str);
}
int main()

{
         int num;
         cout <<"Enter the number " << endl;
         cin >> num;

         while (true) 
         {  
             
             num = num + string_reverse(num);
             if (num == string_reverse(num)) 
               break;
               }  
          cout << num << endl;
}       