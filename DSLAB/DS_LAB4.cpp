/*Initialize an integer array A of size 10.
Take an integer as input and print how many times that integer occurs in A.*/

#include <iostream>
using namespace std;

int main()
{
    int A[10], duplicate[10], size, i, j, Input_Num;

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
            cin>>A[i];
            cout<<endl;
            duplicate[i]=-1;

        }

    for(i=0; i<size; i++)
        {
            int count=1;

            for(j=i+1; j<size; j++)
            {
                if(A[i]==A[j])
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

    cout<<" ";
    cout<<"Enter An Integer Number From The Above Array:"<<" "<<endl;
    cout<<" ";
    cin>>Input_Num;

    for(i=0; i<=1; i++)
    {
        if(Input_Num==A[i])
        {
            cout<<" ";
            cout<<endl;
            cout<<" ";
            cout<<A[i]<<","<<" which occured"<<" "<<duplicate[i]<<" "<<"times"<<endl;
            break;
        }

        else
            cout<<" ";
            cout<<"Did Not Occur!!";
    }

    return 0;
}
