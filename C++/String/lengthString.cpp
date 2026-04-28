#include <iostream>
using namespace std;

int lengthString(char name[]);

int main(){
    char name[10];

    cout << "Enter your name: ";
    cin >> name;

    int len = lengthString(name);

    cout << "Length of the string is: " << len << endl;

    return 0;
}

int lengthString(char name[]){
    int count = 0;

    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }

    return count;
}