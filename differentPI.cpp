/*
问题描述
本关要求学生以不同的精度输出PI（程序给出的PI值为3.14159265358979323846）。

具体要求是：对于输入的一个小于15的非负整数到变量n，你写的程序要输出5个不同精度的PI，小数点后面分别保留n,n+1,n+2,n+3,n+4位，每个PI分别独占一行。

相关知识
流输入输出也可以进行格式控制，C++中是通过流操纵算子来实现的。使用流操作算子必须包含iomanip库：

// 包含流操作算子库
#include <iomanip>
C++的inomanip库提供了多种流操纵算子，来实现不同的格式控制功能，包括设置域宽、设置精度、设置和清除格式化标志、设置域填充字符、在输出流中插入空字符、跳过输入流中的空白字符等。

流操纵算子	功能描述
setbase(b)	以进制基数b为输出整数值
setprecision(n)	将浮点精度设置为n
setw(n)	按照w个字符来读或者写
Flush	刷新ostream缓冲区
Ends	插入字符串结束符，然后刷新ostream缓冲区
Endl	插入换行符，然后刷新ostream缓冲区
ws	跳过空白字符
setfill(ch)	用ch填充空白字符
用setbase控制进制基数
对于标准输出流cout可以使用setbase来设置输出整数的进制基数（只支持8、10、16进制），如：

// 以八进制形式输出整数n
cout << setbase(8) << n << endl;
也可以直接使用流操纵算子oct（八进制）、hex（十六进制）和dec（十进制）直接控制输出整数的进制，如：

// 以十六进制输出整数n
cout << hex << n << endl;
用setprecision设置浮点数输出精度
流操纵算子setprecision或函数precision都可以设置浮点数输出的精度，其参数为输出浮点数的有效数字个数（包括整数部分和小数部分，如12.34的有效数字个数为4）。示例如下：

// 按5位有效位输出12.3 * 3.578，输出结果为44.009
cout << setprecision(5) << 12.3 * 3.578 << endl;
或者：

// 按5位有效位输出12.3 * 3.578，输出结果为44.009
cout.precision(5);
cout << 12.3 * 3.578 << endl;
用setiosflags设置辅助格式
流操纵算子setiosflags可以辅助设置流输入输出格式，其参数是该流的格式标志值，setiosflags提供了不同的参数来支持不同的输入输出格式需求。

setiosflags的格式标志值

标志值	含义
ios::skipws	在输入中跳过空白。
ios::left	左对齐，用填充字符填充右边。
ios::right	右对齐，用填充字符填充左边(缺省对齐方式)。
ios::dec	以基10(十进制)格式化数值(缺省进制)。
ios::oct	以基8(八进制)格式化数值。
ios::hex	以基16(十六进制)格式化数值。
ios::showbase	以C++编译器能读的格式显示数值常量。
ios::showpoint	按精度把后面的空白补0输出。
ios::uppercase	对于十六进制数值显示大写字母A到F，对于科学格式显示大写字母E。
ios::showpos	对于正数显示正号(+)。
ios::scientific	以科学格式显示浮点数值。
ios::fixed	以定点格式显示浮点数值。
例如：

double x = 1.23;
// 输出1.23
cout << setprecision(5) << x << endl;
// 输出1.2300
cout << setiosflags(ios::showpoint) << setprecision(5) << x << endl;
对于域宽，函数width和流操纵算子setw都可以实现对当前域宽（即输入输出的字符数）的设置。

如果输出的数据所需的宽度比设置的域宽小，空位用填充字符（默认为空格）填充。

如果被显示的数据所需的宽度比设置的域宽大，系统会自动突破宽度限制，输出所有位。

如：

cin >> n;
// 以域宽输出n，如果n不足位，前面补空格
cout << setw(6) << n << endl;
更多关于iomanip库的使用参见：
1、setprecision,百度百科，http://baike.baidu.com/item/setprecision
2、iomanip，百度百科，http://baike.baidu.com/item/iomanip
3、setprecision、fixed、showpoint的用法总结，http://blog.csdn.net/u011321546/article/details/9293547

编程要求
本关的编程任务是补全step4/differentPI.cpp文件中的main函数，以实现输出不同精度PI的功能。具体要求如下：

对于用户输入的一个小于15的非负整数n，要求输出5个不同精度的PI，即小数点后面分别保留n,n+1,n+2,n+3,n+4位的PI，每个PI分别独占一行。

具体请参见后续测试样例
本关涉及的代码文件differentPI.cpp的代码框架如下：

#include <iostream>
// 包含流操作算子库
#include <iomanip>
using namespace std;
// 定义常量PI，后面可以直接用PI代替后面的数值
#define PI 3.14159265358979323846
int main()
{
    int n;
    // 请在此添加你的代码，输入n，按不同的精度输出PI
    /********** Begin *********/
    /********** End **********/
    return 0;
}
测试说明
本关的测试文件是step4/differentPI.cpp，测试过程如前一关所述。

以下是平台对step4/differentPI.cpp程序的测试样例：

测试输入：4
预期输出：
3.1416
3.14159
3.141593
3.1415927
3.14159265

测试输入：10
预期输出：
3.1415926536
3.14159265359
3.141592653590
3.1415926535898
3.14159265358979

*/



#include <iostream>

// 包含流操作算子库
#include <iomanip>
using namespace std;

// 定义常量PI，后面可以直接用PI代替后面的数值
#define PI 3.14159265358979323846

int main()
{
    int n;
    // 请在此添加你的代码，输入n，按不同的精度输出PI
    /********** Begin *********/

    scanf("%d",&n);
   	    for(int i = 1;i < 6;i++){
        
	    if(i == 5){

	        cout << setiosflags(ios::showpoint) <<setprecision(n+i) << PI;
	    }else{
	    	if( n == 0){
				  cout << setprecision(n+i) << PI << endl;
		    }else{
		    	cout << setiosflags(ios::dec)<< setiosflags(ios::showpoint)<< setprecision(n+i) << PI << endl;
			} 
        }
    }
    /********** End **********/

    return 0;
}
