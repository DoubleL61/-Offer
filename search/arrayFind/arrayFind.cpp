#include<iostream>
#include<vector>
using namespace std;



  bool Find(int target, vector<vector<int> > array) {
        int n = array.size();
        cout << n;
        for(int i = 0; i < n; )
        {
            for(int j = n - 1; j >= 0; )
            {
                if(array[i][j] < target)
                    i++;
                else if(array[i][j] > target)
                    j--;
                else if(array[i][j] == target)
                    return true;
            }
        }
        return false;
        
    }

int main()
{
	int target = 5;
	vector<vector<int> > array= { {0,1,2},{1,2,3},{2,3,4}};
	bool ifFind = Find(target, array);
	cout << ifFind;
	return 0;
}
