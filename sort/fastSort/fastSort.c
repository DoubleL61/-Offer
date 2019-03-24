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
int sort(int nums[size], int start, int end)
{
	if(start >= end) return 0; 
	int low = start, high = end;
	int mid = nums[low];

	while(low < high)
	{
		while(low < high && nums[high] > mid) high--;
		nums[low] = nums[high];
		while(low < high && nums[low] < mid) low++;
		nums[high] = nums[low];
	}
	nums[low] = mid;
	sort(nums, start, low - 1);
	sort(nums, low + 1, end);
	return 0;
}
int fastSort(int nums[size])
{
	if(nums == nullptr && size < 1)
		return 0;

	int start = 0;
	int end = size - 1;
	sort(nums, start, end);
		
	return 0;
}

int main()
{
	int nums[size] = {5,6,4,3,2};
	printfNums(nums);
   	fastSort(nums);
	printfNums(nums);
	return 0;	
}
