// RnD.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int getIndex(int *arr,int ele,int size)
{
	for(int i= 0; i < size;i++)
	{
		if(arr[i] == ele)
		{
			return i;
		}
	}
}
int AddToBigArr(int ele,int x,int* arr,int * BigArr,int size)
{
	int element = ((ele)%10);
	//go to the index of element i present in array arr
	int index = getIndex(arr,element,size);
	
	for(int j = index+1;j<size;j++)
	{
		BigArr[x] = (ele*10) + arr[j];
		x++;
	}
	return x;
}

void func3(void)
{
	int n,i=0;
	cin >> n;
	int x = n;
	int t = (int)(pow(2.0,n));
	int *BigArr = new int[t];
	int *arr = new int[n];
	
	for(;i<n;i++)
	{
		cin >> arr[i];
	}
	i = 0;
	//store each element in bigarray
	for(;i<n;i++)
	{
		BigArr[i] = arr[i];
	}
	i=0;
	for(;i<t;i++)
	{
	x =	AddToBigArr(BigArr[i],x,arr,BigArr,n);
	}
	i = 0;
	BigArr[t-1] = 0;
	for(;i<t;i++)
	{
		cout << BigArr[i] << " ";
	}
}

int main()
{
	func3();
	return 0;
}
