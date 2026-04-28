#include <iostream>
#include <vector>
using namespace std;
bool chackPalindrome(vector<char> &ch, int n);
int length(char ch);
char toLowercase(char ch);

int main(){

    vector<char> ch;
    ch.push_back('s');
    ch.push_back('s');
    ch.push_back('e');
    ch.push_back('p');
    ch.push_back('e');

    int len = length(ch);
    cout << "String is palindome or not: " << chackPalindrome(ch, len) << endl;

}

bool chackPalindrome(vector<char> &ch, int n) {
    int s = 0;
    int e = n - 1;
    while(s<=e) {
        if(toLowercase(ch[s]) != (ch[e])){
            return false;
        }
        else {
            s++;
            e--;
        }
    }
    return true;
}

int length(char ch){
    int count = 0;
    for(int i = 0; ch[i] == '\0'; i++){
        count++;
    }
    return count;
}

char toLowercase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        return ch - 'A' + 'a';
    }
}