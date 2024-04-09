//@author : Ahmed Mohammed Wahba --> abowahbaz
#ifndef LEET
#define LEET
#include <iostream>
#include <vector>
using namespace std;

// Definition for singly-linked list.
template <typename T>
struct ListNode
{
    T val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(T x) : val(x), next(nullptr) {}
    ListNode(T x, ListNode *next) : val(x), next(next) {}
};

namespace leet
{
    string str;
    // General Function To Parse The Input
    string parseInput(string &input)
    {
        if (input.front() == '[' or input.front() == '"')
        {
            input.erase(input.begin());
        }
        if (input.back() == ']' or input.back() == '"')
        {
            input.pop_back();
        }
        while (input.find('"') != -1)
            input.erase(input.begin() + input.find('"'));
        while (input.find(',') != -1)
            input[input.find(',')] = ' ';
        return input;
    }
    // Functions To Read Single Variables
    string readLine()
    {
        getline(cin, str);
        return parseInput(str);
    }
    string readToken()
    {
        cin >> str;
        return parseInput(str);
    }
    string readString()
    {
        return readLine();
    }
    // Template Function To Read Numbers Of Any Type
    template <typename T>
    T readNumber()
    {
        readToken();
        T var;
        stringstream ss(str);
        ss >> var;
        return var;
    };
    // Input Functions For Arrays
    template <typename T>
    vector<T> toArray(string &input)
    {
        stringstream ss(input);
        vector<T> arr;
        T var;
        while (ss >> var)
        {
            arr.push_back(var);
        }
        return arr;
    }
    template <typename T>
    vector<T> readArray()
    {
        readLine();
        return toArray<T>(str);
    }
    template <typename T>
    vector<vector<T>> read2D()
    {
        readLine();
        int i = 0, n = str.size(), j = 0;
        vector<vector<T>> arr;
        while (i < n)
        {
            if (str[i] == ' ' && str[i + 1] == '[' or i == n - 1)
            {
                string tmp = str.substr(j, i - j);
                tmp = parseInput(tmp);
                arr.push_back(toArray<T>(tmp));
                ++i;
                j = i;
            }
            ++i;
        }
        return arr;
    }
    // Input Function For Linked Lists
    template <typename T>
    ListNode<T> *readList()
    {
        ListNode<T> *head = nullptr;
        ListNode<T> *curr = nullptr;
        vector<T> values = readArray<T>();
        for (const T &val : values)
        {
            if (head == nullptr)
            {
                head = new ListNode<T>(val);
                curr = head;
            }
            else
            {
                curr->next = new ListNode<T>(val);
                curr = curr->next;
            }
        }
        return head;
    }
}
#endif // LEET
       // End of LeetCode.h
