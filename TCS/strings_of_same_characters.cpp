// problem statement 
// given two strings we should calculate wheteher one string can be obtained by arranging the characters in other string 

// Approach 
// first sort the strings , and compare if both strings are equal then the arrangement can be done if not arrangement cannot be done 

#include<iostream>
#include<string>
#include<algorithm>

int main() 

{
         std::string sai;
         std::cin>>sai;
         std::string sri;
         std::cin>>sri;
         if (sai.length() != sri.length())
          {
              std::cout<< "0" <<std::endl;
              exit(0);
          } 
          else {
         std::sort(sai.begin(),sai.end()) ;
         std::sort(sri.begin(),sri.end()); 

         if (sai.compare(sri)== 0) 
           std::cout<<"1" <<std::endl;
         else 
          std::cout<< "0" <<std::endl;
 
          }  


          return 0;

} 