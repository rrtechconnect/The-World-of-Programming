// constructing vectors
#include <iostream>
#include <vector>  //Need to include the vector library!


int main ()
{
  //creating a vector of integers
  std::vector<int> vectorInts;  
  std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";
  
  //Changing the size of vectorInts to 6
  vectorInts.resize(6);
  std::cout<<"\n\nvectorInts now has "<<vectorInts.size()<<" elements\n";
 
  //TODO: instantiate vFloat vector
  std::vector<float> vFloat; 
  std::cout<<"vFloat has "<<vFloat.size()<<" elements\n";
  
  //Changing the size of vectorInts to 10
  //TODO: Change the size of vFloat to 10 elements
  vFloat.resize(10);
  std::cout<<"\n\n vFloat now has "<<vFloat.size()<<" elements\n";
  return 0;
}
