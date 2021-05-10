// problem statement 
// given a string of length N , and character we should check whether the first and last character are same and length greater than 2 and less than 50.if the condition satsifies then we should find the occurence of the given character in string. if condition fails then return  -1
#include<iostream>
#include<string>
#include<algorithm>

int main() 

{
         std::string sai;
         std::cin>>sai;
         if(sai.length() > 50 || sai.length() < 2) 
                {
                    std::cout<< "-1" <<std::endl;
                    exit(0);
                }
        if(sai[0]==sai[sai.length()-1])
        {
            char k;
            std::cin>>k;
            int count=0;
            for(int i=0; i<sai.length(); i++)
            {
               if(sai[i]==k)
                 count++;
            
            } 
            std::cout<< count <<std::endl;

        }
        else
         std::cout<< "0" <<std::endl; 

          return 0; 

}