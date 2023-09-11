#include "heads.h"

void enter_ask_zh();//询问是否使用程序(中文版)
void execute_option();//输入要求,生成文件
void instruction_told_zh();//告知使用者使用细则(中文版)

void enter_ask_zh()//中文版
{
    string input;
    cout << "------欢迎使用文件生成器 v0.1------" << endl;
    bool check[10] = {true}; //入口控制变量,[0]为最外层,向内依次递增
    while (check[0])
    {
        cout << "键入start以开始使用,键入exit以退出程序" << endl;
        cout<<">";
        cin >> input;
        if (input.compare("start") == 0)
        {
            execute_option();
            //do something
        }
        if (input.compare("exit") == 0)
        {
            cout << "程序正在退出..." << endl;
            Sleep(3000);
            exit(0);
        }
        if (input.compare("start") != 0 && input.compare("exit") != 0)
        {
            cout << "请按照提示输入正确的指令" << endl
                 << endl;
            input.clear();
        }
    }
    return;
}

void execute_option()
{
    instruction_told_zh();
        return;
}

void instruction_told_zh()
{
    cout << "-----程序使用细则-----" << endl
         << "--基本命令:" << endl
         << "1.new" << endl
         << "--用法:"
         << "new [option1] [parameter1] [option2] [parameter2] ..." << endl;
    cout << "--选项" << endl
         << "括号内的为选项的简写形式" << endl
         << "1.-num(-n)" << endl
         << "2.-type(-t)" << endl
         << "3.-context(-c)" << endl
         << "4.-path(-p)" << endl;
    cout << "--用法" << endl 
    <<"1.   "<<"-num [number of the files]"<<endl
    <<"示例:"<<endl
    <<"-num 89"<<"  生成89个文件"<<endl
    <<"2.   "<<"-type [suffix of the files]"<<endl
    <<"示例:"<<endl
    <<"-type .cpp"<<"   生成的文件以.cpp后缀结尾"<<endl
    <<"3.   "<<"-context [limit of the context in files]"<<endl
    <<"诠释:"<<endl
    <<"-context"<<"若启用此选项,则生成的文件内会包含随机内容(数字和字母混合)"<<endl
    <<"您可以在文件全部生成后查看这些文件的内容"<<endl
    <<"您可以限制文件中内容的字符数"<<endl
    <<"示例:"<<endl
    <<"-context 20"<<"  生成的文件内包含随机的但不超过20个数字英文混合的字符"<<endl
    <<"4.   "<<"-path [the path of created files]"<<endl
    <<"示例:"<<endl
    <<"-path C:\\desktop\\"<<"  在C盘 desktop文件夹下生成文件"<<endl;

    return;
}