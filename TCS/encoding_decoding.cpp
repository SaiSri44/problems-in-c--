#include<iostream>
#include<string>
#include<algorithm>
// prequesties 
// AScii values of Capital letters is 65-90
// Ascii values of the small letters is 97-122
// Ascii values of digits is 48-57
// remaining ascii values for special characters 
int main() 

{
         std::string encode,decode;
         std::getline(std::cin,encode); 
         std::cin>>decode;
         if(encode== "" || decode== "")
          {  std::cout<< "INVALID INPUT"<<std::endl;
             exit(0);
          }

          for(int i=0; i<encode.length(); i++)
          {
             if(encode[i] == ' ' || encode[i] == ',' || encode[i] == '.') 
                     continue;
             else if((encode[i] >=65 &&  encode[i] <=90) || (encode[i]>=97 && encode[i] <=122))   
                 encode[i] = char(encode[i] + 5);
             else 
              {
                  std::cout<< "INVALID INPUT" <<std::endl;
                  exit(0);
              }          
          } 
          std::cout<< encode <<std::endl;

          for(int i=0; i<decode.length(); i++)
          {
             if(decode[i] == ' ' || decode[i] == ',' || decode[i] == '.') 
                     continue;
             else if((decode[i] >=65 &&  decode[i] <=90) || (decode[i]>=97 && decode[i] <=122))   
                 decode[i] = char(decode[i] - 5);
             else 
              {
                  std::cout<< "INVALID INPUT" <<std::endl;
                  exit(0);
              }          
          } 
          std::cout<< decode <<std::endl; 

          return 0;

}  