#include<iostream>

#define size 5
void printfNums(int nums[size])
{
	for(int i =0; i < size; ++i)
 		std::cout << nums[i] << " ";
 	std::cout << "\n";
}

int exchangeXY(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
	return 0;
}
int findMin(int nums[size], int start, int end)
{
	if(end - start ==1) return nums[end]; 

	int low = start, high = end;
	int mid = (start + end)/2;

	if(nums[mid] > nums[low])
	{	
		low = mid;
		findMin(nums, low, high);	
	}
	if(nums[mid] < nums[high])
	{
		high = mid;
		findMin(nums, low, high);
	}
	if(nums[mid] == nums[high] && nums[mid] == nums[low])
	{
		int mins= nums[low];
		for(int i =low+1; i < high; ++i)
		{
			if(nums[i] < mins) 
				mins = nums[i];
		}
		return mins;
	}

}
int minNum(int nums[size])
{
	//if(nums == nullptr && size < 1)
	//	std:: cout << "Invalid input!" <<std::endl;
	
	int start = 0;
	int end = size - 1;
	if(size == 1) return nums[0];
	int result = findMin(nums, start, end);
	return result;
}

int main()
{
	int nums[size] = {1,0,1,1,1};
	printfNums(nums);
   	int result = minNum(nums);
	std::cout << result << std::endl;
	return 0;	
}
