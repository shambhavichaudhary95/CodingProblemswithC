/* Problem: - Return the largest element from a user entered array */
/* Approach: - Take the array input from the user. 
			  Arrange the array in the ascending order.
			  The last element of the re-arranged array will return the largest of all the elements in the array. */
#include<iostream>
using namespace std;
int main()
{
	int a[10];  /*Creating an array */
	int n,i,x,y,temp;   	/* n=Number of elements in the array, i,x,y=looping purpose, temp=shuffling the elements within an array */
	cout<<"\nEnter the no of elements in the array"<<endl; /*Take the Input from the user for number fo elements in the array */
	cin>>n;
	cout<<"\nEnter the array"<<endl;					/*Take the elements one by one from the user */
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\nThe elements of the array are\n"<<endl;	/*Print the elements of the array*/
	for(i=0;i<n;i++)
	{
	
		cout<<a[i]<<endl;
	}
	for(x=0;x<n;x++)									/*shuffling the elements of the arrange in order to arrange it in ascending order */
	{
		for(y=x+1;y<n;y++)
		{
			if(a[x]>a[y])
			{
				temp=a[x];
				a[x]=a[y];
				a[y]=temp;
			}
		}
	}
	cout<<"\nThe elements of the array are\n"<<endl;	/*Print the re-arranged array */
	for(i=0;i<n;i++)
	{
	
		cout<<a[i]<<endl;
	}
	cout<<"\nLargest number in the array is "<<a[(n-1)];	/*The last element of the array is the greatest of all the elements. Print the same*/
	return 0;
	
}
