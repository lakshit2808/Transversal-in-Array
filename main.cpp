//Transversal Operation in Array

#include <iostream>
using namespace std;

int main()
{
   int arr[5] , size , i; // declaration of array and size of array also initially we have assumed the size of array to be 5
   cout <<"Enter the size of array ";
    scanf("%d", &size) ; // ask user to enter the size of array

   for(i = 0; i < size ; i++)
   {
       cout << "Enter the Element ";
       scanf("%d",&arr[i]); // here we ask user to input the elements in array

   }
   cout <<"Elements in the array are ";
   for(i = 0 ; i < size ; i++)
   {
       cout << arr[i]; // Here we have printed the array which was entered by the user
   }
    return 0;

}
