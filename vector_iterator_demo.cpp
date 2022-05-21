#include<iostream>
#include<vector>
#include<cctype>

using namespace std;

int  main(){
    vector<char> v(10);
    vector<char>::iterator p;

    p = v.begin();

    int i = 0;
    while (p != v.end()){
        *p = i + 'a';
        p++;
        i++;
    }

    //printing the elements of the vector

    p = v.begin();
    while(p != v.end()){
        cout << *p << " ";
        p++;
        i++;
    }
    cout << "\n\n";

    // modifying the elements of the vector
    p = v.begin();
    while (p != v.end()){
        *p = toupper(*p);
        p++;
        i++;
    }

    //printing the values
    p = v.begin();
    while(p != v.end()){
        cout << *p << " ";
        p ++;
    }
}