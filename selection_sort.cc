/*
Program - Selection Sort
Author - Deepanshu Sharma
Date - 19/02/16
*/

#include<iostream>
using namespace std;

void print_array(int arr[],int size){
	for(int i=0;i<size;i++)
		cout << arr[i] << " ";
}

void selection_sort(int arr[],int size){
	int min_key,temp;
	for(int i=0;i<size;i++){
		min_key = i;
		for(int j=i+1;j<size;j++){
			if(arr[j]<arr[min_key])
				min_key = j;
		}
		if(min_key!=i){
			temp=arr[min_key];
			arr[min_key]=arr[i];
			arr[i]=temp;
		}
	}

}

int main(){

	int arr[10]={1,4,3,7,6,5,0,9,8,2};
	cout << "Initial array : " << endl;
	print_array(arr,10);
	cout << endl;

	selection_sort(arr,10);

	cout << "Sorted array : " << endl;
	print_array(arr,10);
	cout << endl;

	return 0;
}
