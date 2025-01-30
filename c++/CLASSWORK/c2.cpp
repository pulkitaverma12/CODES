#include <iostream> 
using namespace std; 
class Box 
{ 
 private: 
 int length; 
 public: 
 Box(int x){
length=x;
 } 
 friend int printLength(Box); //friend function 
}; 
int printLength(Box b) 
{ 
 b.length += 10; 
 return b.length; 
} 
int main() 
{ 
 Box b(5); 
 cout<<"Length of box: "<< printLength(b)<<endl; 
 return 0; 
}
