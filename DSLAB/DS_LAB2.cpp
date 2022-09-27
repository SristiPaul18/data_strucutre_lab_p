/*Initialize TWO integer arrays A and B of different sizes.
Make a new array with the common elements between A and B.
Print the new array element(s).
If there is no common element, output “No common element!”.*/


#include<iostream>
using namespace std;

int main()
{
    int num1,num2,i,j;

    cout<<"Enter The Size Of First Array: "<<endl;
    cin>>num1;
    int array1[num1];

    cout<<"Enter The "<<num1<<" Elements Of The First Array: "<<endl;

    for(i=0;i<num1;i++)
        {
            cin>>array1[i];
        }

    cout<<"Enter The Size Of Second Array: "<<endl;
    cin>>num2;
    int array2[num2];

    cout<<"Enter The "<<num2<<" Elements Of The Second Array: "<<endl;

    for(i=0;i<num2;i++)
        {
            cin>>array2[i];
        }

    cout<<"The Common Elements Of The Two Arrays Are: "<<endl;

    for(i=0;i<num1;i++)
        {
            for(j=0;j<num2;j++)
            {
                if(array1[i]==array2[j])
                {
                    cout<<array1[i]<<" ";
                    break;
                }

            }

             if(array1[i]!=array2[j])
             {
                 cout<<endl;
                 cout<<"No Common Element!!";
                 break;
             }

        }

}

