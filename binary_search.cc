/*
Program - Binary search
Author - Deepanshu Sharma
Date - 19/02/16
*/

#include<iostream>
using namespace std;

int binary_search(int arr[],int start_index,int end_index,int item_to_be_searched){

	if(start_index <= end_index){
		int mid = start_index+(end_index-start_index)/2;	//same as (start_index+end_index)/2,
															//but if large start_index and end_index are there,it helps avoiding overflow condition
		if(item_to_be_searched == arr[mid])
			return mid;
		else if(item_to_be_searched < arr[mid])
			return binary_search(arr,start_index,mid-1,item_to_be_searched);
		else return binary_search(arr,mid+1,end_index,item_to_be_searched);
	}
	return -1;
}

int main(){

	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int item_to_be_searched=8;
	int found = binary_search(arr,0,9,item_to_be_searched);

	(found == -1)?cout<<"Not found"<<endl:cout<<"Element at "<<found<<" position"<<endl;

	return 0;
}