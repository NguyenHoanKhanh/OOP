#include <iostream>
#include "cstring.cpp"

using namespace std;

int main()
{
    cstring arr1, arr2;

    cout<<"arr1 :";
    cin>> arr1;
    cout<<"arr2 :";
    cin>> arr2;


    if (arr1 == arr2)
        cout <<"2 arr == "<< endl;
    else if (arr1 < arr2)
        cout<<"arr1 < arr2  "<<endl;
    else if (arr1 > arr2) 
        cout<<"arr1 > arr2  "<<endl;
    // Sum
    cstring arr3 = arr1 + arr2;
    cout <<"arr1 + arr2 = arr3 = " <<arr3<<endl;

    return 0;
}