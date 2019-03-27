/*
问题解析与相关知识
这里介绍一种通过位运算来获得一个字符对应的字节（即8个位对应的0|1值）。下面首先介绍一下位运算的基本知识。

位运算
位运算允许在二进制位级别上对数据进行操作。C++支持6种不同的位运算符。

其中：

按位与&：两个操作数的按位与是将两个操作数二进制表示的对应位进行与运算，即如果两个操作数的对应位都为1，则结果的对应位也为1，否则为0。
例如，3 & 14 结果为 2，计算方法为：
3的二进制表示：00000011
14的二进制表示：00001110
3 & 14结果的二进制表示：00000010

按位或|：两个操作数的按位或是将两个操作数二进制表示的对应位进行或运算，即如果两个操作数的对应位都为0，则结果的对应位也为0，否则为1。
例如，3 | 14 结果为 15，计算方法是：
3的二进制表示：00000011
14的二进制表示：00001110
3 | 14结果的二进制表示：00001111

按位异或^：两个操作数的按位异或是将两个操作数二进制表示的对应位进行异或运算，即如果两个操作数的对应位不相同，则结果的对应位为1，否则为0。

按位取反~：将操作数二进制表示的对应位进行取反运算，即如果操作数的对应位为0，则结果的对应位为1，否则为0。

向左移位<<：将左操作数的二进制表示向左移位，移动的位数就是右操作数的值，右端移出的空位填充0，移位后的左操作数的值即为运算的结果。

向右移位>>：将左操作数的二进制表示向右移位，移动的位数就是右操作数的值，移位后的左操作数的值即为运算的结果。左端移出的空位填充方式取决于左操作数的类型和具体的值：如果左操作数是无符号类型，或者是有符号类型但其值非负（最高位为0），那么高位填充0；如果左操作数是有符号类型，并且为负数（最高位为1），高位填充的值取决于所用的计算机系统，有的C++实现填充0，有的填充1。

字符的二进制位的计算
有了上述位运算，我们就可以使用按位与运算判断一个字符的二进制表示（共8位）的某一位是1还是0。

例如下面的语句输出了字符变量x的二进制表示的第7位的值（x的二进制表示有8位，从左到右分别为第1~8位）：

cout << (int)(bool)(c & 0x02);

该语句输出表达式(int)(bool)(c & 0x02)的值。该表达式有三个运算符：强制类型转换(int)、强制类型转换(bool)和按位与运算符&，因为括号的原因，先计算c & 0x02。0x02是十六进制的02，其二进制表示为00000010。将c和0x02进行按位与，除了第7位外，不管c的其它位是什么，按位与的结果的对应位都是0，因为0x02除了第7位，其它位都是0。那么就有，如果c的第7位是1，则按位与的结果就是00000010，否则就是00000000。

然后是两个类型转换运算，则优先级相同，且是右结合，所以先计算(bool)(c & 0x02)，即将计算结果转换为bool类型。如果c & 0x02的值为00000000，则结果为false，否则结果为true（即只要有一位不为0，则整个十六进制数转换后即为true）。最后再把计算结果转换为int类型，即如果前面的计算结果是true，转换结果就是1，否则是0。

所以整个表达式的运算效果是：如果c的第7位为0，就输出0，为1则输出1。以此类推，我们就可以计算出c对应的8位0|1串了。

更多关于位运算符的使用参见：
位运算，百度百科，http：//baike.baidu.com/item/位运算
《C++语言程序设计》，第三版，第二章，王挺等，清华大学出版社，2015年2月。


对应用户输入一个字符，输出该字符在内存中存储时对应的二进制0|1串。
*/
// 包含两种I/O库，可以使用任一种输入输出方式
#include <stdio.h>
#include <iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

int main()
{
    // c-存储输入的字符
    char c;

    // 输入字符
    cin >> c;

    // 请在此添加代码，输出c的位二进制表示
    /********** Begin *********/
	cout << (int)(bool)(c & 0x80);
    cout << (int)(bool)(c & 0x40);
    cout << (int)(bool)(c & 0x20);
    cout << (int)(bool)(c & 0x10);
    cout << (int)(bool)(c & 0x08);
    cout << (int)(bool)(c & 0x04);
    cout << (int)(bool)(c & 0x02);
    cout << (int)(bool)(c & 0x01);
    /********** End **********/

    return 0;
}