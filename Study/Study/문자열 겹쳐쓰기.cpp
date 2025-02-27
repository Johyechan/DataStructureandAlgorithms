//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string solution(string my_string, string overwrite_string, int s) {
//	string answer = "";
//	int j = 0;
//	for (int i = 0; i < my_string.size(); i++)
//	{
//		if (i >= s && j < overwrite_string.size())
//		{
//			answer += overwrite_string[j];
//			j++;
//		}
//		else
//		{
//			answer += my_string[i];
//		}
//	}
//	return answer;
//}
//
//int main()
//{
//	string str1;
//	string str2;
//	int s;
//	cin >> str1 >> str2 >> s;
//
//	cout << solution(str1, str2, s);
//	return 0;
//}