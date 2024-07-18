//@author : Ahmed Mohammed Wahba --> abowahbaz
#ifndef LEET
#define LEET
#include <iostream>
#include <vector>
using namespace std;

// Definition for singly-linked list.
template <typename T = int>
struct ListNode
{
    T val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(T x) : val(x), next(nullptr) {}
    ListNode(T x, ListNode *next) : val(x), next(next) {}
};
template <typename T = int>
struct TreeNode
{
    T val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(T x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(T x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

namespace debug
{
    template <typename T>
    void debugArray(vector<T> arr, ostream &out = cout)
    {
        for (T &i : arr)
            out << i << " ";
        out << "\n";
        return;
    }
    template <typename T>
    void debug2D(vector<vector<T>> arr, ostream &out = cout)
    {
        for (vector<T> row : arr)
        {
            debugArray(row, out);
            out << "\n";
        }
        out << "\n";
        return;
    }
}
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
    //Function to convert a string to a given type
    template <typename T>
    T stringToType(string str)
    {
        stringstream ss(str);
        T var;
        ss >> var;
        return var;
    }

    // Template Function To Read Numbers Of Any Type
    template <typename T>
    T readNumber()
    {
        readToken();
        return stringToType<T>(str);
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
    // Input function for Binary Trees
    template <typename T = int>
    TreeNode<T> *readTree()
    {
        vector<string> values = readArray<string>();
        if (values.empty())
            return nullptr;

        TreeNode<T> *root = new TreeNode<T>(stringToType<T>(values[0]));
        vector<TreeNode<T> *> nodes = { root };
        for (int i = 1; i < values.size(); i++)
        {
            if (values[i] != "null")
            {
                TreeNode<T> *node = new TreeNode<T>(stringToType<T>(values[i]));
                nodes.push_back(node);
                if (i % 2 == 1)
                    nodes[(i - 1) / 2]->left = node;
                else
                    nodes[(i - 1) / 2]->right = node;
            }
        }
        return root;
    }
    // LEET
    // End of LeetCode.h
}

#endif