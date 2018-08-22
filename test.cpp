/*
* @Author: Alpha
* @Date:   2018-08-21 17:09:08
* @Last Modified by:   Alpha
* @Last Modified time: 2018-08-21 18:06:30
*/

#include <iostream>
#include <string>
#include "function.h"

using namespace std;

int main(){
    string a = "";
    string b = "";
    int c = 0;
    cout<<getname("哈哈")<<endl;
    cout<<"请输入你的身份证号："<<endl;
    cin>>a;
    cout<<a<<endl;
    cout<<"请输入你的生日："<<endl;
    cout<<"请输入你的性别（1：男 2：女）："<<endl;
    cin>>b;
    cout<<"让我猜猜您的性别："<<getsex(c)<<endl;
    cin>>c;
    return 0;
}