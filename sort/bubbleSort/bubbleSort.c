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
int bubbleSort(int nums[size])
{
	for(int i = 0; i < size; ++i)
	{
		for(int j = i + 1; j < size; ++j)
		{
			if(nums[i] > nums[j])
				exchangeXY(nums[i], nums[j]);
		}
	}
	return 0;
}

int main()
{
	int nums[size] = {5,6,4,3,2};
	printfNums(nums);
   	bubbleSort(nums);
	printfNums(nums);
	return 0;	
}
