/*Initialize an array.
Size should be more than FIVE.
Write you program to change the array in such a way so that
there cannot be any duplicate element in the array anymore.
Print the changed array.
If the initialized array already had no duplicate elements from the beginning,
output a message saying “Array already unique!”;*/

#include<iostream>
using namespace std;
int main ()
{
    int A_Array[20], B_Array[20], n, i, j, k = 0;
    cout << "Enter The Array Size (Minimum 5 Elements):"<<endl;
    cin >> n;

    cout << "Enter The "<< n <<" Elements:"<<endl;
    for (i = 0; i < n; i++){
        cin >> A_Array[i];}

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (A_Array[i] == B_Array[j])
                break;

            else if (A_Array[i] != B_Array[j])
               cout << "Unique ";
        }

        if (j == k)
        {
            B_Array[k] = A_Array[i];
            k++;
        }
    }

    cout << "The Elements After Deletion Are : ";
    for (i = 0; i < k; i++){
        cout << B_Array[i] << " ";}

    return 0;
}
