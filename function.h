/*
* @Author: Alpha
* @Date:   2018-08-21 17:40:43
* @Last Modified by:   Alpha
* @Last Modified time: 2018-08-21 17:46:29
* @description ： 公共方法头文件
*/

#include <iostream>
#include <string>

using namespace std;

/**
 * [getname description]
 * @Author   Alpha
 * @DateTime 2018-08-21T17:41:02+0800
 * @return   [description]
 */
string getname(string name){
    return name;
}

/**
 * [getage description]
 * @Author   Alpha
 * @DateTime 2018-08-21T17:43:44+0800
 * @return   [description]
 */
int getage(int age){
    return age;
}

/**
 * [getweight description]
 * @Author   Alpha
 * @DateTime 2018-08-21T17:44:10+0800
 * @return   [description]
 */
int getweight(int weight){
    return weight;
}

/**
 * [getsex description]
 * @Author   Alpha
 * @DateTime 2018-08-21T17:44:50+0800
 * @return   [description]
 */
string getsex(int sex){
    string str = "";
    switch(sex){
        case 1:
            str = "男";
            break;
        default:
            str = "女";
            break;
    }
    return str;
}
