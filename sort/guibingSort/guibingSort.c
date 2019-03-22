#include <iostream>

#define size 5
void printfNums(int nums[size])
{
	for(int i =0; i < size; ++i)
 		std::cout << nums[i] << " ";
 	std::cout << "\n";
}

int merge_array(int nums[], int first, int mid, int last, int temp[])
{ 
	int i = first, j = mid + 1;
	int m = mid, n = last;
	int k = 0;
	
	while(i <= m && j <= n)
	{ 
		if(nums[i] < nums[j])
			temp[k++] = nums[i++];
		else 
			temp[k++] = nums[j++];
	}
	while(i <= m)
	{
		temp[k++] = nums[i++];
	}
	
	while(j <= n)
	{
		temp[k++] = nums[j++];
	}
	 
	for(i = 0; i < k; ++i)
	{
		nums[first + i] = temp[i];
	}
	return 0;
}
int merge_sort(int nums[], int first, int last, int temp[])
{
	if(first < last)
	{
		int mid = (first + last)/2;
		merge_sort(nums, first, mid, temp);
		merge_sort(nums, mid + 1, last, temp);
		merge_array(nums, first, mid, last, temp);
 	}
	return 0;
}


int guibingSort(int nums[])
{
	int first = 0, last = size-1;
	int temp[size]={0};
	
	merge_sort(nums, first, last, temp);

}


int main()
{
	int nums[size] = {5,6,4,3,2};
	printfNums(nums);
   	guibingSort(nums);
	printfNums(nums);
	return 0;	
}
