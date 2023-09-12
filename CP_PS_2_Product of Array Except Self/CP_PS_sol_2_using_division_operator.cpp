/*Topic:Given an integer array  nums , return an array  answer  such that  answer[i]  is equal to the product of all the elements of nums except nums[i].
Constraints:
The product of any prefix or suffix of  nums  is guaranteed to fit in a 32-bit integer.
You must write an algorithm that runs in  O(n)  time and without using the division operation.
Example 1:
Input: nums = [1,2,3,4] 
Output: [24,12,8,6]
Example 2:
Input: nums = [-1,1,0,-3,3] 
Output: [0,0,9,0,0]
*/
#include <iostream>
using namespace std;

void array(int a[],int size);

void array(int a[],int size)
{
    int answer[size];
    int temp=1;
    for(int i=0;i<size;i++)
    {
        temp=temp*a[i];
        //cout<<answer[i]<<" ";
    }
    for(int i=0;i<size;i++)
    {
        answer[i]=temp;
        answer[i]=answer[i]/a[i];
        cout<<answer[i]<<" ";
    }
}
int main()
{
    int nums[]={1,2,3,4};
    array(nums,(sizeof(nums)/sizeof(int)));
    return 0;
}