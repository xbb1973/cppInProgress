//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
////vector容器中存放自定义数据类型
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//void test01()
//{
//	vector<Person>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 10);
//	Person p3("ccc", 10);
//	Person p4("ddd", 10);
//	Person p5("eee", 10);
//
//	//向容器中添加数据
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	//遍历容器中的数据
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//<>尖括号里是什么数据类型 *it解出来就是什么类型
//		//cout << "姓名：" << (*it).m_Name << " 年龄" << (*it).m_Age << endl;
//
//		cout << "姓名：" <<it->m_Name<< " 年龄" << it->m_Age << endl;
//	}
//}
//
////存放自定义的指针
//void test02()
//{
//	vector<Person*>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 10);
//	Person p3("ccc", 10);
//	Person p4("ddd", 10);
//	Person p5("eee", 10);
//
//	//向容器中添加数据
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	//遍历容器
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "测试2：姓名：" << (*it)->m_Name << " 年龄：" << (*it)->m_Age << endl;
//	}
//
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}