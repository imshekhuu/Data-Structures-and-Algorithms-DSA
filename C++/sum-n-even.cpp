#include <iostream>
using namespace std;
int main(){
int a, i=1;
cin>>a;
int sum =0;
while (i <= a)
{
  if (i % 2 ==0)
  {
    sum = sum + i;
    i++;
  }
  else{
    i++;
  }
  
}
cout << "sum is: " << sum << endl;

}

