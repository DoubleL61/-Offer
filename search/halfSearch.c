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

int search(int nums[], int key, int start, int end)
{
	if(start <= end)
	{
		int mid = (start + end)/2;
		if(key == nums[mid]) return mid;
		else 
		{	
			search(nums, key, start, mid-1);
			search(nums, key, mid + 1, end);
		}
	}
	else return false;
	
}
int halfSearch(int nums[size], int key)
{
	if(nums == nullptr && size < 1)
		return false;

	int start = 0, end = size;
	int index = search(nums, key, start, end);
		
	return index;
}

int main()
{
	int nums[size] = {5,6,4,3,2};
	int key = 4;
	printfNums(nums);
   	int index = halfSearch(nums, key);
	std::cout << "key's index in nums is : " << index << std::endl;
	return 0;	
}
