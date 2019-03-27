/*
C++预定义的I/O流对象有4个：cout、cin、cerr和clog。

cout代表标准输出流，关联显示器；
cin代表标准输入流，关联键盘；
cerr和clog代表标准错误流，也关联显示器。
cin和流提取运算符>>一起实现数据输入,
cout、cerr和clog和流插入运算符<<一起实现数据输出。


本关要求使用流输入输出方式实现以下功能：输入一个生日，如1992 3 18，程序能够输出相应的问好信息，如“Hello! 3 18 1992”。

*/



// 包含I/O流库iostream
#include <iostream>

// 加载名字空间std
using namespace std; 

int main()
{
    // 声明三个变量，分别用来存储年、月、日
    int y, m, d;

    // 请在此添加你的代码，输入你的生日，并按指定格式输出信息	
    /********** Begin *********/
	cin >> y >> m >> d;
	cout <<"Hello!"<< " " << m <<" " << d << " "<<y;
    /********** End **********/

    return 0;
}
