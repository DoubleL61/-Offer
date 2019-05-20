#include <iostream>
using namespace std;




void replaceSpace(char *str,int length) {
        int cnt = 0;
        int index = 0;
        int oriLen = 0;
        while(str[index]!= '\0')
        {
            oriLen++;
            if(str[index] == ' ')
                cnt++;
            index++;
        }
        int len = oriLen + 2 * cnt;
        //char *str_new = new char[len];
        if(len < length)
        {
            cout << "length is not enghou.";
        }
        else
        {
        int i = oriLen -1, j = len -1;
        while(i >= 0 && j > i)
        {
            if(str[i] == ' ')
            {
                str[j] = '%';
                str[j--] = '2';
                str[j--] = '0';
            }
            else{
                str[j--] = str[i];
            }
            --i;
        }
        }
        
        //str = str_new;
	}

int main()
{
	char str = "hello world";
	int length = 50;
	replaceSpace(&str, length);

	return 0;
}
