#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
//function prototypes:
void reverse(char s[], int size);

int main() {
    char name[] = {'A', 'R', 'T', 'E', 'M'};
    //before reversing:
    for(int i = 0; i < 5; i++){
        cout << name[i];
    }
    cout << '\n';
    reverse(name, 5);
    //after reversing:
    for(int i = 0; i < 5; i++){
        cout << name[i];
    }
    return 0;
}

void reverse(char* s, int size){
    for(int i = 0; i < size / 2; i++){
        char tmp = s[i];
        s[i] = s[size - i - 1];
        s[size - i - 1] = tmp;
    }
}
