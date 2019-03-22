#include<iostream>

#define size 5
void printfNums(int nums[size])
{
	for(int i =0; i < size; ++i)
 		std::cout << nums[i] << " ";
 	std::cout << "\n";
}
int insertSort(int num[size])
{
	int key;
	for(int i = 1; i < size; ++i)
	{
		int j = i -1;
		key = num[i];
		for(;j >= 0 && num[j] > key;--j)
		{
			num[j+1] = num[j];				
		}
		num[j + 1] = key;
	}
	return 0;
}

int main()
{
	int nums[size] = {5,6,4,3,2};
	printfNums(nums);
   	insertSort(nums);
	printfNums(nums);
	return 0;	
}
