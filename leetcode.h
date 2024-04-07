//@author : Ahmed Mohammed Wahba --> abowahbaz
#ifndef LEET
#define LEET
#include <iostream>
#include <vector>

namespace leet
{
    std::string str;
    // General Function To Parse The Input
    std::string parseInput(std::string &str)
    {
        if (str.front() == '"' or str.front() == '[')
            str.erase(str.begin());
        if (str.back() == '"' or str.back() == ']')
            str.pop_back();
        while (str.find(',') != -1)
            str[str.find(',')] = ' ';
        return str;
    }
    // Functions To Read Single Variables
    std::string readLine()
    {
        std::getline(std::cin, str);
        return parseInput(str);
    }
    std::string readToken()
    {
        std::cin >> str;
        return parseInput(str);
    }
    std::string readString()
    {
        return readLine();
    }
    // Template Function To Read Numbers Of Any Type
    template <typename T>
    T readNumber()
    {
        readToken();
        T var;
        std::stringstream ss(str);
        ss >> var;
        return var;
    };
    // Input Functions For Arrays
    template <typename T>
    std::vector<T> toArray(std::string &input)
    {
        std::stringstream ss(input);
        std::vector<T> arr;
        T var;
        while (ss >> var)
        {
            arr.push_back(var);
        }
        return arr;
    }
    template <typename T>
    std::vector<T> readArray()
    {
        readLine();
        return toArray<T>(str);
    }
    template <typename T>
    std::vector<std::vector<T>> read2D()
    {
        readLine();
        int i = 0, n = str.size(), j = 0;
        std::vector<std::vector<T>> arr;
        while (i < n)
        {
            if (str[i] == ' ' && str[i + 1] == '[' or i == n - 1)
            {
                std::string tmp = str.substr(j, i - j + 1);
                tmp = parseInput(tmp);
                arr.push_back(toArray<T>(tmp));
                ++i;
                j = i;
            }
            ++i;
        }
        return arr;
    }

}
#endif // LEET
       // End of LeetCode.h
