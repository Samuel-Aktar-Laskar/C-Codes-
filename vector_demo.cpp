#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main(){
    vector<char> v(10);
    unsigned int i;

    cout << "The size of the vector is :"<<v.size() <<endl;

    //assigning elements
    for(i=0; i<v.size(); i++) v[i] = 'a' + i;

    cout << "The new contents are" << endl;

    for (i=0; i< v.size(); i++) {
        cout <<v[i] << " ";
    }
    cout <<"\n";

    cout << "Expanding the vector"<<endl;

    for (i = 0; i< 10; i++) {
        v.push_back(i+10+'a');
    }

    //now displaying the content

    for(i=0; i< v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl<<endl;
    // changing the content of the vector

    for(i = 0; i< v.size(); i++) v[i] = toupper(v[i]);

    cout << "Modified contents are"<<endl;
    for (i =0; i< v.size(); i ++){
        cout << v[i]<<" ";
    }

    return 0;
}