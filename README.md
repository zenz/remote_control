## 相关实验硬件，固件

[![remote box for airtub partner](./stl/remotebox-thin.jpg 'Remote box for Airtub Partner')](http://airtub.com)

### 硬件

HiiBot 的 IoTs2 开发板一个，EC11编码器一个，5芯杜邦线一组

### VSCode, PlatformIO

编译和上传固件需要VSCode和PlatformIO插件工作，请自行研究如何安装配置。

### 元器件连接方式

EC11编码器的G连接开发板的G，+连接开发板的3V，CLK连接开发板42脚，DT连接开发板41脚，SW连接开发板40脚

### 测试

编辑main.cpp文件，修改其中的对应的值以满足要求
```C
char *wifi_ssid = "YOUR WIFI SSID";            // Your WiFi SSID
char *wifi_password = "YOUR WIFI PASSWORD";    // Your WiFi password
char *dev_name = "YOUR BOILER SERIAL NUMBER";  // Your registered device serial number
char *dev_password = "YOUR REGISTER PASSWORD"; // Your registered device password
```

## 雅图伴侣本地UDP通讯格式

### UDP传输方式

发送时采用UNICAST，只要把符合格式的JSON指令串（最大长度180字符）用雅图伴侣设备密码加码处理后发送给对应符合MDNS命名规则的雅图伴侣设备本地名称（例如eq2613000006.local）即可。以上方法需要网关支持MDNS查找和转发，否则可能会失效。也可以采用发送到广播地址"224.0.1.3"，端口4211的方式。

接收的话，需要用MULTICAST从地址"224.0.1.3",端口4211接收数据并进行解码（加码的逆过程），然后分析获取数据即可。

### UDP数据格式

本地UDP通讯数据包采用JSON格式，可以有以下内容例如
```
{
    "dev":"aircube_123456",   # 发送信息的设备名称
    "tar":"eq2613000006",
    "flt":0,                # 故障状态 0-无故障、126-通讯故障、127-校验故障、128-超时[只读]
    "fst":1,                # 火焰状态 0-未点火、1-点火[只读]
    "mod":100,              # 当前燃气比例阀开度 0-100%[只读]
    "cct":80,               # 当前采暖水温度[只读]
    "cdt":72,               # 当前生活热水温度[只读]
    "ccm":1,                # 当前采暖状态 0-未开启、1-开启[只读]
    "cdm":0,                # 当前生活热水状态 0-未开启、1-开启[只读]
    "tct":80,               # 目标采暖水温度 [操作指令]
    "tdt":42,               # 目标生活热水温度 [操作指令]
    "tcm":1,                # 目标采暖水模式 0-未开启、1-开启 [操作指令]
    "tdm":1,                # 目标生活热水模式 0-未开启、1-开启 [操作指令]
    "atm":1,                # 自动室温调节模式 0-未开启、1-开启 [操作指令]
    "odt":11,               # 当前室外温度[只读]
    "coe":4,                # 当前采用的室外温度补偿系数 [操作指令]
    "crt":19.2,             # 当前室温[只读]
    "trt":20,               # 目标室温 [操作指令]
    "pwr":4.31,             # 当前电量[只读]
    "sch":1,                # 自动任务状态 0-未开启、1-开启 [操作指令]
    "vir":1,                 # 系统炉打开了屏蔽高温杀菌模式
    "tdf":10                # 系统炉生活水温差设为10度
    "sta":1                 # 请求马上回应当前运行状态
}
```
凡是标记为[只读]的，只能用于读取数据，其它则可以读取，也可以设置。

在本项目中，我们只简单的发送tdt指令，用于设置生活热水温度。
在项目例子中，我们可以看到，发送的JSON需要包括本机的名称dev,目标设备的名称tar,以及请求请求状态指令sta，例如
```
{
    "dev":"aircube_123456",
    "tar":"eq2613000006",
    "tdt":43,
    "sta":1
}
```

### 本例子的局限性

本例子只实现了生活热水的控制与交互，也没有完善如发送重试，休眠等功能，因为这仅仅是一个例子而已。如果您有更多的想法和创意，请自行实现。如果您对雅图伴侣功能增加有什么想法，请与我联系。