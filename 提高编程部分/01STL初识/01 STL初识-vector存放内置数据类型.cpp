//#include<iostream>
//#include<algorithm>
//using namespace std;
//#include<vector>
//
//void MyPrint(int val)
//{
//	cout << val << endl;
//}
//
////vector容器存放内置数据类型
//void test01()
//{
//	//创建了一个vector容器 可以认为是一个数组
//	vector<int> v;
//	//向容器中插入数据
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	//通过迭代器访问容器中的数据
//	////v.begin()：起始迭代器 指向容器中第一个元素
//	////迭代器可以被认为类似于指针
//	//vector<int>::iterator itBegin = v.begin();//起始迭代器 指向容器中第一个元素
//	//vector<int>::iterator itEnd = v.end();//结束迭代器 指向容器中最后一个元素的下一个位置
//
//	////第一种遍历方式
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//
//	////第二种遍历方式
//	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	//{
//	//	cout << *it << endl;
//	//}
//
//	//第三种遍历方式
//	//使用STL提供标准遍历算法 头文件 algorithm
//	for_each(v.begin(), v.end(), MyPrint);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}