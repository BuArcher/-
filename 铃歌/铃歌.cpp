#include<iostream>
#include<stdlib.h>
using namespace std;
void main()
{
	int a;;
	string ab = "1.", ac = "2.", ad = "3.", ae = "4.", af =" 5.", ag = "6.", ah = "7.", ai = "8.";                          //定义常量
	string b = "如果从三次元女团的角度说，端木铃歌应该是最具有“团魂”的一位", c = "她与我们很多人一样，从小被父母教导着要好好学习天天向上", d = "于是成为了工程学院的一名大学生";                                             //定义字符串
	string e = "但端木铃歌自幼非常热爱音乐，梦想是成为一名歌姬偶像", f = "于是为了梦想她从工程学院退学，并考上了超次元学院", g = "日常爱好是吃吃吃，玩恐怖游戏！";
	string h = "还有呆毛长度是21厘米嘻嘻", i = "当然了，是我算的嘻嘻", m = "身高150";
	string j = "别后悔", k = "请适度玩梗谢谢", l = "xxxl码的的裙子,  这个梗太老了嘻嘻";
	string o = "铃歌秃头", p = "据说没了呆毛就是秃头", q = "别问，问就是秃头hhhhhh";
	string r = "日粤星辰，无所不能", s = "Last stardust我与他的羁绊", t = "为了更好地唱歌特地报了声乐课";
	string u = "她真的努力了，请大家支持他", v = "两百斤的肥宅，别问问就是b站动态";
	string w = "铃歌独爱南天天", x = "虽然南天天有点dd倾向", y = "心疼铃歌", z = "选自sing女团歌曲《灵儿想丁当》，铃歌是罩着叮当们的嘻嘻";
	string aa = "暂无";
	cout << "这里是端木铃歌百科,有问题问我" << endl;             //问题输出
	cout << "1.关于铃歌的设定" << endl;
	cout << "2.关于铃歌的梗 嘻嘻" << endl;
	cout << "3.铃歌的名曲" << endl;
	cout << "4.铃歌的食量" << endl;
	cout << "5.铃歌唯一伴侣" << endl;
	cout << "6.叮当的由来" << endl;
	cout << "7.特典" << endl;
	cout << "尽情的问吧" << endl;
	cout << "(输入想问问题的编号)" << endl;
	cin >> a ;
	if (a == 1)              //选择输出
	{
		cout << ab ;
		cout << b << endl;
		cout << c << endl;
		cout << d << endl;
		cout << e << endl;
		cout << g << endl;
		cout << h << endl;
		cout << i << endl;
		cout << m << endl;
		system("pause");

	}
	else if(a == 2)
	{
		cout << ac ;
		cout << j << endl;
		cout << k << endl;
		cout << m << endl;
		cout << l << endl;
		cout << o << endl;
		cout << p << endl;
		cout << q << endl;
		system("pause");  
	}
	else if (a== 3&&a!=1&&a!=2)
	{
		cout << ad ;
		cout << r ;
		cout << s << endl;
		cout << t << endl;
		cout << u << endl;
		system("pause");	
	}
	else if (a == 4)
	{
		cout << ae ;
		cout << k << endl;
		cout << v << endl;
		system("pause");
	}
	else if (a == 5)
	{
		cout << af ;
		cout << w << endl;
		cout << x << endl;
		cout << y << endl;
		system("pause");
	}
	else if (a == 6)
	{
		cout << ag ;
		cout << z << endl;
		system("pause");
	}
	else if (a == 7)
	{
		cout << ah ;
		cout << aa << endl;
		system("pause");
	}
	cout << "制作人：archer" << endl;                        //总结输出
	cout << "报错请告知谢谢谢谢大家" << endl;
	system("pause");

}
