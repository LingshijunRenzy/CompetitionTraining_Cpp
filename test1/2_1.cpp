#include <iostream>
#include <algorithm>
#include <string>

// 判断一个重量是否可以移位得到
bool isRotatable(int weight)
{
    std::string strWeight = std::to_string(weight);
    do
    {
        int rotatedWeight = std::stoi(strWeight);
        if (rotatedWeight == weight || rotatedWeight < weight)
        {
            return false;
        }
    } while (std::next_permutation(strWeight.begin(), strWeight.end()));
    return true;
}

// 计算在区间 [L, R] 内可以一起玩原神的大象对数
int countElephants(int L, int R)
{
    int count = 0;
    for (int a = L; a < R; ++a)
    {
        if (isRotatable(a))
        {
            for (int b = a + 1; b <= R; ++b)
            {
                if (isRotatable(b))
                {
                    ++count;
                }
            }
        }
    }
    return count;
}

int main()
{
    int L, R;
    std::cin >> L >> R;
    int result = countElephants(L, R);
    std::cout << result << std::endl;
    return 0;
}