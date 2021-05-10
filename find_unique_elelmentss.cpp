#include<iostream>

using namespace std;

int main() 

{
         int n;
         cout <<"enter the size of the array" << endl; 
         cin>>n;
         int arrray[n];
         for(int i =0; i<n; i++)
            cin >> arrray[i];
         for (int i = 0; i < n; i++)
         {
             for (int j= i+1; j < n; j++)
             {
                 if(arrray[i] == arrray[j])
                     arrray[j] = -1;
             } 
              
         } 
         cout <<"the unique elements of the array are  " << endl;
         for (auto x : arrray)
         {
             if(x!=-1)
               cout<< x << endl; 
         }
         return 0; 

} 