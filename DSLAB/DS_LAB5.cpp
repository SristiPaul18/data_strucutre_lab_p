/* Initialize an integer array of size 10.
Print the number of times each element occurs in the array*/

#include <iostream>
using namespace std;

int main()
{
    int Array[10], duplicate[20], size, i, j, count;

    cout<<" ";
    cout<<"Enter The Array Size (Maximum 10 Elements):"<<endl;
    cout<<" ";
    cin>>size;
    cout<<endl;

    cout<<" ";
    cout<<"Enter The "<<size<<" Elements:"<<endl;

    for(i=0; i<size; i++)
        {
            cout<<" ";
            cin>>Array[i];
            duplicate[i]=-1;
        }

    for(i=0; i<size; i++)
        {
            count=1;
            for(j=i+1; j<size; j++)
                {
                    if(Array[i]==Array[j])
                    {
                        count++;
                        duplicate[j]=0;
                    }

                }

            if(duplicate[i]!=0)
                {
                    duplicate[i]=count;
                }

        }

    cout<<endl;
    cout<<" ";
    cout<<"Duplicate Elements In The Array Are:"<<endl;

    for(i=0; i<size; i++)
        {
            cout<<" ";
            if(duplicate[i]!=0)
            {
                cout<<Array[i]<<","<<" which occured"<<" "<<duplicate[i]<<" "<<"times"<<endl;

            }
        }

    return 0;
}

