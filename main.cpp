#include <iostream>
#include "WininetHttp.h"
using namespace std;
int main()
{
   
    //_TCHAR url[256] = { L"https://www.youtube.com/" };//这可以写百度等网页都可以
    //HINTERNET hSession = InternetOpen(_T("UrlTest"), INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0);//打开
    //if (hSession != NULL)//如果成功
    //{
    //    HINTERNET hHttp = InternetOpenUrl(hSession, url, NULL, 0, INTERNET_FLAG_DONT_CACHE, 0);//发送请求

    //    if (hHttp != NULL)
    //    {
    //        wprintf_s(_T("%s\n"), url);

    //        BYTE Temp[MAXSIZE];
    //        ULONG Number = 1;
    //        while (Number > 0)
    //        {
    //            InternetReadFile(hHttp, Temp, MAXSIZE - 1, &Number);//读取数据
    //            Temp[Number] = '\0';
    //            printf("%s", Temp);
    //        }
    //        InternetCloseHandle(hHttp);
    //        hHttp = NULL;
    //    }
    //    InternetCloseHandle(hSession);
    //    hSession = NULL;
    //}


    CWininetHttp ht;
    string getdata = ht.RequestJsonInfo("httpbin.org/post",Hr_Post);
    printf("获得的数据是:%s\n", getdata.c_str());
	return 0;
}
