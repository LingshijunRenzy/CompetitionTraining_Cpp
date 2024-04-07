#include <stdio.h>
#include <string>

int main()
{
    int l = 0, r = 0, sum = 0;
    scanf("%d %d", &l, &r);
    for (int i = l; i < r; i++)
    {
        std::string str = std::to_string(i);
        int len = str.length();
        for (int j = 0; j < len - 1; ++j)
        {
            char lastchar = str[len - 1];
            str.pop_back();
            str = lastchar + str;
            int num = std::stoi(str);
            if(num > i && num <= r)
                sum++;
        }
    }
    printf("%d\n", sum);
}