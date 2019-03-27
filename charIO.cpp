/*
程序接受一个输入字符，然后将该字符输出三遍并以“!”结束。
*/



// 包含标准输入输出函数库
#include <stdio.h>

// 定义main函数
int main()
{
    // 请在此添加‘重要的事情说三遍’的代码
    /********** Begin *********/
	char c = getchar();
	for(int i=0;i<3;i++){
    	putchar(c);
    }
    putchar('!');
        /********** End **********/
    return 0;
}
