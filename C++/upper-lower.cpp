#include <iostream>
using namespace std;
int main(){
char ch;
cin>>ch;
if (ch>96 && ch<123)
{
   cout<<"lower case"<< endl;
}
else if (ch>64 && ch <91)
{
    cout<<"upper case"<< endl;
}
else if (ch>47 && ch <58)
{
    cout<<"numeric value"<< endl;
}
else{
    cout<<"symbol"<< endl;
}

}

