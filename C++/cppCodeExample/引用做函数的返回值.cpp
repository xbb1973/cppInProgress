//#include<iostream>
//using namespace std;
//
////引用做函数的返回值
////1.不要返回局部变量的引用
//int& test01()
//{
//	int a = 10;
//	return a;
//}
//
////2.函数的调用可以作为左值
//int& test02()
//{
//	static int a = 10;//静态变量，存放在全局区，全局区上的数据在程序结束后由系统释放
//	return a;
//}
//int main()
//{
//	//int &ref=test01();
//	//cout << "ref=" << ref << endl;//第一次结果正确，是因为编译器做了保留
//	//cout << "ref=" << ref << endl;//第二次结果错误，因为a的内存已经释放
//
//	int& ref2 = test02();
//	cout << "ref2=" << ref2 << endl;//通过使用static延长了变量的生命周期
//	cout << "ref2=" << ref2 << endl;
//
//	test02() = 1000;//如果函数的返回值是引用，这个函数的调用可以作为左值
//
//	cout << "ref2=" << ref2 << endl;
//	cout << "ref2=" << ref2 << endl;
//
//
//	system("pause");
//	return 0;
//}