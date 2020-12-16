#include <iostream>
#include <cstring>

using namespace std;

const int MAX_SIZE = 100;

char* normalize(char* text) {
    int i = 0;

    for(int j = 0; text[j]; ++j) {
        text[i++] = text[j];
        if(text[j] == ' ') {
            while(text[j] == ' ') {
                ++j;
            }
            --j;
        }
    }

    text[i] = '\0';

    return text;
}

int prefixCount(char* text1, char* text2){
    int i=0;
    while(text1[i] && text2[i] && text1[i]==text2[i]){
        ++i;
    }
    return i;
}

int main() {
    char str[] = {'H', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd'};
    char str1[] = "Hello world";

    char str2[MAX_SIZE] = "C++";
    char str3[4] = {'C', '+', '+', '\0'};

    char text[MAX_SIZE];
    cin >> text;
    cin.get(text, 100);
    cin.getline(text, 100, '.');

    cout << str << endl;
    cout << str1 + 5 << endl;

    str[2] = 'p';

    char* q = "String";

    int i = 0;
    char* p = q;

    while(*p) {
        // *p;
        ++i;
        ++p;
    }

    // strlen(text);
    char hello[] = "hello";
    char world[] = "world"; 

    // mark  mask
    // aaaa aaaaaa
    // hello world

    // strcat(hello, world);
    // strcmp(hello, world); // -1 | 0 | 1

    if(!strcmp(hello, world)) {
        cout << "False" << endl;
    } else {
        cout << "True" << endl;
    }

    // strcpy(copy, origin);

    // "Programming with C++, Java and C#"
    // C++
    // m

    // strstr(string, substring);
    // strchr(string, character);

    char str[100];
    cin.getline(str,50);
    char replacement,original;
    cin>> original >> replacement;
    int length = strlen(str);
    for(int i = 0; i < length ; i++ ) {
        if(str[i]== original) {
            str[i] = replacement;
        }
    }
    
    char text[100];
    cin.getline(text, 50);
    int counter = 0;
    int words = 0;
    int length = strlen(text);
    for(int i = 0; i < length; ++i) {
        ++counter;
        if(text[i] == ' ' || text[i] == '\n' || text[i] == '\0') {
            cout << counter << endl;
            counter = 0;
            ++words;
        }

        // while(i < lenght && text[i] != ' ') {
        //     ++counter;
        //     ++i;
        // }

        // if(i < length) {
        //     cout << counter << endl;
        //     counter = 0;
        //     ++words;
        // }
    }

    cout << words << endl;

    // Hello        world       !

    // Programming
    // Programmer
 
    return 0;
}