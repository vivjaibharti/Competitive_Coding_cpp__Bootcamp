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
#include <math.h>
using namespace std;

void cal(int a[],int size);
int division(int,int);

void cal(int a[],int size)
{
    int answer[size];
    int temp=1;
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]!=0)
        {
            temp=temp*a[i];
        }
        else
        {
            count++;
        }
    }
    //cout<<"Value of temp: "<<temp<<endl;
    for(int i=0;i<size;i++)
    {
        if(count==0)
        {
            answer[i]=temp;
            //answer[i]=answer[i]/a[i];
            answer[i]=division(answer[i],a[i]);
            cout<<answer[i]<<" ";
        }
        if (count==1)
        {
            if(a[i]!=0)
            {
                answer[i]=0;
            }
            else
            {
                answer[i]=temp;
            }
           cout<<answer[i]<<" ";
        }

        if(count>=2)
        {
            answer[i]=0;
            cout<<answer[i]<<" ";
        }
        
    }
}

int division(int dividend, int divisor)
{
    int sign = (dividend < 0) ^ (divisor < 0);
    
    dividend=abs(dividend);
    divisor=abs(divisor);

    if(divisor==1)
    {
        return (sign==0)? dividend: -dividend;
    }

    int temp=exp(log(dividend)- log(divisor))+0.0000000001;

    return (sign==0)? temp: -temp;

}

int main()
{
    int nums1[] ={1,2,3,4};
    int nums2[]={-1,1,0,-3,3};
    int nums3[]={0,0,0,5,6,2};
    cal(nums1,(sizeof(nums1)/sizeof(int)));
    cout<<endl;
    cal(nums2,(sizeof(nums2)/sizeof(int)));
    cout<<endl;
    cal(nums3,(sizeof(nums3)/sizeof(int)));
    return 0;
}