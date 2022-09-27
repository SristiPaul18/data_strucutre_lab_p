/*Initialize TWO integer arrays of different sizes.
Merge the input arrays and create a new array.
Then print the new array in reverse order*/

#include<iostream>
using namespace std;

int main()
{
    int Array_1[50], Array_2[40], Merge[100], size1, size2, i, k, size;

    cout<<"Enter The Size Of First Array: "<<endl;
    cin>>size1;
    cout<<endl;

    cout<<"Enter The "<<size1<<" Elements For The First Array: "<<endl;
    for(i=0; i<size1; i++)
        {
            cin>>Array_1[i];
            Merge[i] = Array_1[i];
        }

    k = i;

    cout<<"Enter The Size Of Second Array: "<<endl;
    cin>>size2;
    cout<<endl;

    cout<<"Enter The "<<size2<<" Elements For The Second Array: "<<endl;
    for(i=0; i<size2; i++)
        {
            cin>>Array_2[i];
            Merge[k] = Array_2[i];
            k++;
        }

    size = size1 + size2;

    cout<<"The New Array After The Merge Is:"<<endl;

    for(i=0; i<k; i++)
        cout<<Merge[i]<<" ";
        cout<<endl;


    cout<<"The Reverse Of The New Array After The Merge Is:"<<endl;

    for(i=size-1; i>=0; i--)
        cout<<Merge[i]<<" ";
        cout<<endl;

    return 0;
}
