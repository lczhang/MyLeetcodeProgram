#include <iostream>
#include <map>
#include <vector>
#include<cstdlib>
#include <limits.h>
#include <iterator>
#include <algorithm>

using namespace std;

class Solution {
    typedef int mapIt;
public:
    int threeSumClosest(vector<int> &num, int target) {
        int result = INT_MAX;
        int sum;
        sort(num.begin(),num.end(),cmp);
        for (int i = 0;i < num.size();i++)
        {
            cout<<num[i]<<" ";
            if (i % 10 == 0)
                cout<<endl;
        }
        cout << endl;
        for (int i = 0;i < num.size();i++)
        {
            if ((i > 0) && (num[i - 1] == num[i]))
                continue;
            int begin = i + 1;
            int end = num.size() - 1;
            int temp;
            while (begin < end)
            {
                temp = num[begin] + num[i] + num[end] ;
                if (temp > target)
                    end--;
                else if (temp < target)
                    begin++;
                else
                {
                    return target;
                }
            }
            cout << temp << " ";
            if (i % 10 == 0)
                cout<<endl;
            if (result > abs(temp - target))
            {
                result = abs(temp - target);
                sum = temp;
            }

        }
        return sum;
    }

    static bool cmp(int a,int b)
    {
        return a < b;
    }
};

int main()
{
    cout << "Hello world!" << endl;
    /*vector<int> num = {60,54,43,4,78,28,-4,53,99,-95,25,74,-32,34,-34,94,16,74,34,-56,75,-21,15,18,
                                    -45,-43,-35,-25,46,18,-12,5,-25,-20,56,37,92,-75,98,-87,-37,-79,78,71,-96,-69,-68,-35,86,18,97,37,80,
                                    -61,36,19,-8,-77,34,-76,-70,-70,85,-62,25,44,2,75,25,59,-14,-67,8,-75,-91,4,-60,-29,-44,48,37,22,-5,-21,
                                    -65,-59,-91,-34,1,7,-91,-17,51,61,-3,-96,33,46,-81,-35,-79,-56,52,-35,30,11,20,-37,-7,-99,39,-83,78,-42,
                                    -27,-35,3,-8,13,-75,-17,30,46,75,30,96,-32,73,73,100,-25,5,92,50,89,-13,-8,43,-42,-40,-22,-74,-80,-97};*/
   /* vector<int> num = {-43,61,-62,24,73,64,-23,94,-65,-27,24,-56,8,54,0,19,-100,-64,-53,6,-22,13,-18,55,-41,37,34,-43,0,-8,-95,
                                    76,73,21,-93,16,98,60,70,-32,30,-7,-27,-73,79,-26,41,32,41,-5,82,-14,50,-94,22,62,60,-48,51,12,-34,68,-40,
                                    -20,-20,46,46,-79,1,82,-98,41,-79,-43,-76,-25,-94,-16,-25,46,-95,-79,53,-1,-30,43,93,17,72,66,83,-89,-16,42,
                                    40,87,-46,40,22,85,-91,46,-77,19,-56,-28,8,47,-20,65,8,60,-49,-86,-74,56,30,79,97,-89,14,-90,66,-12,-57,46,
                                    -61,87,72,13,75,75,36,79,-16,84,-49,-86,76,68,-8,-65,-86,-11,55,-69,-59,34,63,59,-11,43,16,7,93,57,-55,2,38,64,3,
                                    22,-9,-22,-34,-84,90,-71,-88,64,-19,13,-8,-81,-95,-38,-9,-25,82,57,60,-26,66,21,8,65,-38,-68,-59,24,91};*/
    vector <int> num = {87,6,-100,-19,10,-8,-58,56,14,-1,-42,-45,-17,10,20,-4,13,-17,0,11,-44,65,74,-48,30,-91,13,
                                    -53,76,-69,-19,-69,16,78,-56,27,41,67,-79,-2,30,-13,-60,39,95,64,-12,45,-52,45,-44,73,97,100,-19,-16,-26,58,
                                    -61,53,70,1,-83,11,-35,-7,61,30,17,98,29,52,75,-73,-73,-23,-75,91,3,-57,91,50,42,74,-7,62,17,-91,55,94,-21,
                                    -36,73,19,-61,-82,73,1,-10,-40,11,54,-81,20,40,-29,96,89,57,10,-16,-34,-56,69,76,49,76,82,80,58,-47,12,17,77,
                                    -75,-24,11,-45,60,65,55,-89,49,-19,4};
    Solution s;
    cout << s.threeSumClosest(num,-275);
    return 0;
}
