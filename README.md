# CHttpConnection

本项目是利用MFC(WininetHttp) C++ HTTP post get 请求



# http协议

HTTP协议是Hyper Text Transfer Protocol（超文本传输协议）的缩写，用于客户端和服务器之间的通信。请求访问文本或图像等资源的一端称为客户端， 而提供资源响应的一端称为服务器端。HTTP协议是基于TCP协议的。


浏览器url中如果是http（s） 开头的就是使用http的协议，如果是ftp开头的就是使用ftp的协议


URL（Uniform Resource Locator）地址用于描述一个网络上的资源，基本格式如下

- 主机地址：http服务器的IP地址或者域名
- 端口：HTTP服务器的默认端口是80
- 路径：访问资源的路径
- 查询字符串：发送给http服务器的数据
- 锚点：锚

URL 的一个例子
https://www.cctry.com/forum.php?mod=viewthread&tid=199830&page=22#lastpost

- 协议类型：                http
- 主机地址：                www.cctry.com
- 路径：                    /forum.php
- 查询字符串：              mod=viewthread&tid=199830&page=22
- 锚点：                    astpost


WinHttp 和 WinINet 都是对Socket的封装 都是微软提供的网络库

https = http + ssl，其中ssl是一种安全的传输层协议。通信前先建立安全通道，之后在传递数据。
