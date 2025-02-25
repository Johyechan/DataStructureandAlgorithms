//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> solution(vector<int> arr, int n) {
//	vector<int> answer;
//	for (int i = 0; i < arr.size(); i++)
//	{
//		if (arr.size() % 2 == 0)
//		{
//			if (i % 2 != 0)
//			{
//				answer.push_back(arr[i] + n);
//			}
//			else
//			{
//				answer.push_back(arr[i]);
//			}
//		}
//		else
//		{
//			if (i % 2 == 0)
//			{
//				answer.push_back(arr[i] + n);
//			}
//			else
//			{
//				answer.push_back(arr[i]);
//			}
//		}
//	}
//	return answer;
//}
//
//int main()
//{
//	vector<int> vec = { 49, 12, 100, 276, 33 };
//	int n = 27;
//	for (int i = 0; i < vec.size(); i++)
//	{
//		cout << solution(vec, n)[i] << " ";
//	}
//	return 0;
//}