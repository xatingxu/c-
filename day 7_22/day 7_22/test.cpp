//���ݿ����ӳ�
//��Ŀ����
//Webϵͳͨ����Ƶ���ط������ݿ⣬���ÿ�η��ʶ����������ӣ����ܻ�ܲ
//Ϊ��������ܣ��ܹ�ʦ���������Ѿ����������ӡ����յ����󣬲������ӳ���û��ʣ����õ�����ʱ��
//ϵͳ�ᴴ��һ�������ӣ������������ʱ�����ӻᱻ�������ӳ��У�����������ʹ�á�
//�����ṩ�㴦���������־���������һ�����ӳ������Ҫ�������ٸ����ӡ�
//����������
//��������������ݣ�ÿ�����ݵ�һ�а���һ��������n��1sn��1000������ʾ�����������
//������n�У�ÿ�а���һ��������id��A��B��C..����Z���Ͳ�����connect��disconnect����
//���������
//��Ӧÿһ�����ݣ�������ӳ������Ҫ�������ٸ����ӡ�

//#include <iostream>
//#include <string>
//#include <cstdlib>
//#include <set>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		string id, CZ;
//		cin >> id >> CZ;
//		set<string> s;
//		int finsize = 0;
//		for (int i = 0; i < n; i++)
//		{
//
//			if (CZ == "connect")
//			{
//				s.insert(id);
//
//			}
//			else if (CZ == "disconnect")
//			{
//				s.erase(id);
//			}
//			int size = s.size();
//			finsize = max(size, finsize);
//		}
//		cout << finsize << endl;
//	}
//	system("pause");
//	return 0;
//	
//	
//
//}
//mkdir
//�����У�ÿ��Ҫ����һ̨�»�����ʱ�򣬾���ζ����һ��Ŀ¼��Ҫ������
//����Ҫ����Ŀ¼�� / usr / local / bin��������Ҫ�˴δ���"/usr����" / usr / local"�Լ�
//�� / usr / local / bin"�����ڣ�Linux��mkdir�ṩ��ǿ��ġ�-p��ѡ�ֻҪһ������
//��mkdir - p / usr / local / bin"�����Զ�������Ҫ���ϼ�Ŀ¼��
//���ڸ���һЩ��Ҫ�������ļ���Ŀ¼�������æ������Ӧ�ġ�mkdir - p'���
//����������
//��������������ݡ�
//ÿ�����ݵ�һ��Ϊһ��������n��1sn��1024����
//������n�У�ÿ�а���һ����������Ŀ¼����Ŀ¼���������ֺ���ĸ��ɣ����Ȳ�����200���ַ���
//���������
//��Ӧÿһ�����ݣ������Ӧ�ġ������ֵ�˳������ġ�mkdir - p�����
//ÿ������֮�����һ��������Ϊ�ָ���

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		vector<bool> flag(n, true);
		vector<string> ming(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> ming[i];
		}
		sort(ming.begin(), ming.end());
		for (int i = 0; i < ming.size() - 1; i++)
		{
			if (ming[i] == ming[i + 1])
			{
				flag[i] = false;
			}
			else if (ming[i].size() < ming[i + 1].size() && ming[i + 1][ming[i].size()] == '/')
			{
				flag[i] = false;
			}
		}
	
		for (int i = 0; i < ming.size(); ++i)
		if (flag[i]) cout << "mkdir -p " << ming[i] << endl;
		cout << endl;
	 }
	    system("pause");
	    return 0;
	}
