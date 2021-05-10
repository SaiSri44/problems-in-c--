// problem statement
// we should find the frequency of the all the characters in the string 

// Approach 
// we know that the ascii values of the characters is from the 0 to 127
// first we create an array of size 128,then intialize all the elements with the zero. each index determines the ascii values of the characters
// then we iterate over the string,for the each character we found we increment the value at the ascii index in the array . so the frequency of char in the string is the value at the corresponding ascii index of the array 
#include<iostream>
#include<string>
#include<algorithm>

int main() 

{
         int array[128];
         for(int i=0; i<128; i++)
         {
          array[i] = 0; //intializing all the elements of the array to zero ,in order to find the count of char
         
         } 
        //  cin reads until the null character is reached so inoreder to get the whole sentence as string use the getline function 
         std::string sai;
         std::getline(std::cin,sai);
         for(auto x : sai)
            {
                array[int(x)]++; //for each time we found the char we increment the value at the corresponding ascii value of char in the array
            } 
        //  if value in array is zero that mean that the char is not present in the string.if it is one that mean the char is unique in string 
        for(int i=0; i<128; i++)
        {
          if(array[i]!=0)
            {
                std::cout<< char(i) << "  " <<array[i] <<std::endl; 
            } 
        
        }       
          return 0; 

}