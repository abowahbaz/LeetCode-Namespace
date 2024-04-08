# LeetCode&#8482; C++ Namespace

## About
While getting ready for the technical interview, many programmers will consider <b>LeetCode</b> to test their knowledge of data structures and algorithms, and some coding tricks 💻. 

One problem that faced was that <b>LeetCode</b> forces running and testing the code on the site not locally, also the input format for the test cases is as not as any other online judge (Codeforces / AtCoder), so it would be hard for one to test the code on local then modify it to fit on the format of <b>LeetCode</b> 🤕.

That's why I decided to create a namespace for <b>C++</b> that would take the input in the format of <b>LeetCode</b> and then return a standarized version of the input that you can use to test your solution 😎.

## Key Functions
| Function Signature                                 | Description                                                                 |
|----------------------------------------------------|-----------------------------------------------------------------------------|
| `string parseInput(string &input)`                 | Parses the input string and returns a standardized version of it.            |
| `string readLine()`                                | Reads a line from the input stream and returns it as a string.                |
| `string readToken()`                               | Reads a token from the input stream and returns it as a string.               |
| `string readString()`                              | Reads a string from the input stream and returns it as a string.              |
| `template < typename T > T readNumber()`           | Reads a string from the input stream and returns it as a number of the given type. |
| `template < typename T > vector < T > toArray(string &input)` | Converts the input string to an array of the given type.              |
| `template < typename T > vector < T > readArray()`  | Reads an array from the input stream and returns it as a vector of the given type. |
| `template < typename T > vector < vector < T >> read2D()` | Reads a two-dimensional array from the input stream and returns it as a 2D vector of the given type. |

## Usage Example
```cpp
#include<iostream>
#include<leetcode.h>
using namespace std;
using namespace leet;

int main(){
    vector<int> arr = readArray<int>(str);  
    vector<vector<string>> 2Darr = read2D<string>();  
    float x = readNumber<float>();
    long double y = readNumber<long double>();
    string s = readString();    
    return 0;
}
```

## Installation
All you need is to copy <code>leetcode.h</code> to the include directory of your compiler, and then you can include it in your code as shown in the example above.

example path for the include directory in the case of g++ on Windows:
```
C:\mysys64\ucrt64\include
```
>[!NOTE]
> Further information about the include directory can be found in the documentation of your compiler.\
>If you are using an online compiler, you can copy the content of the file and paste it at the beginning of your code.

> [!TIP]
> Feel free to contribute to the project by adding more functions or improving the existing ones. 🚀



## Made with ❤️ by [abowahbaz](https://github.com/abowahbaz)

