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
int fastSort(int nums[size])
{
	if(nums == nullptr && size < 1)
		return 0;

	int pivot = nums[0];
	int j = 1;
	while()
	{
		if(nums[i] < pivot)
		{
			exchangeXY(nums[i], pivot);
			for(int j = i + 1; )
		}	
	}
		


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
