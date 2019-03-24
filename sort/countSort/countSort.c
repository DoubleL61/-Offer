#include<iostream>

#define size 5
void printfNums(int nums[size])
{
	for(int i =0; i < size; ++i)
 		std::cout << nums[i] << " ";
 	std::cout << "\n";
}

int findMaxMin(int nums[], int &maxNum, int &minNum)
{
	maxNum = nums[0];
	minNum = nums[0];
	for(int i =0; i < size; ++i)
	{
		if(nums[i] > maxNum)	maxNum = nums[i];  
		if(nums[i] < minNum)	minNum = nums[i]; 
	}
	
	return 0;
}
int countSort(int nums[size])
{
	if(nums == nullptr && size < 1)
		return 0;

	int result[size];
	int maxNum = 0, minNum = 0;
	findMaxMin(nums, maxNum, minNum);

	int len_cnt = maxNum - minNum + 1;
	int counter[len_cnt];
	for(int i = 0; i < len_cnt; ++i)
	{
		counter[i] = 0;	
	} 		
	
	for(int i = 0; i < size; ++i)
	{
		counter[nums[i] - minNum]++;
	}
	
	for(int j = 1; j < len_cnt; ++j)
	{
		counter[j] += counter[j - 1];	
	}

	for(int k = size - 1; k >= 0; --k)
	{
		int v = nums[k];
		int index = counter[v-minNum] - 1;
		result[index] = v;
		counter[v-minNum]--;
	}
	printfNums(result);
	return 0;
}

int main()
{
	int nums[size] = {5,6,4,3,2};
	printfNums(nums);
   	countSort(nums);
	//printfNums(nums);
	return 0;	
}
