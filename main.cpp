#include <iostream>

using namespace std;
//���� ���
/*class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int i,j,k;
        int cmp = 100000;
        int temp;//�м���
        int tmp_cmp;//�м�����target�Ĳ�ֵ
        int res;
        for(i = 0;i < nums.size();i++)
        {
            for(j = i + 1;j < nums.size();j++)
            {
                for(k = j + 1;k < nums.size();k++)
                {
                    temp = nums[i] + nums[j] + nums[k];
                    //cout << "temp: "<<temp<<endl;
                    if(temp >= target)
                        tmp_cmp = temp - target;
                    else tmp_cmp = target - temp;

                    if(tmp_cmp < cmp)
                    {
                        cmp = tmp_cmp;
                        res = temp;
                    }

                }
            }
        }
        return res;

    }
};*/
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int i;

        int temp;//�м���
        int tmp_cmp;//�м�����target�Ĳ�ֵ

        int start,end;//����i����
        sort(nums.begin(),nums.end());
        int res = nums[0] + nums[1] + nums[2];
        int cmp = abs(res - target);
        //cout << "res start:"<<res <<endl;
        for(i = 0;i < nums.size() - 2;i++)
        {
            cout << "i :" << i <<endl;
            start = i + 1;
            end = nums.size() - 1;
            //cout << "start:" << start << "end:" << end << endl;
            while(start < end)
            {
                    temp = nums[i] + nums[start] + nums[end];
                    tmp_cmp = abs(temp - target);
                    if(tmp_cmp < cmp)
                    {
                        cmp = tmp_cmp;
                        res = temp;
                    }

                   if(temp > target) end --;
                   else start ++;
            }
        }
        return res;

    }
};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
