>一些踩坑步骤：[[Creating a album 水墨相册制作，墨水屏]]
# 整体流程

## 1. 购买物资
### 材料清单
1. 7.5寸墨水屏
	1. 一定要买640＊384分辨率的
	2. 咸鱼搜鑫盛液晶配件，7.5寸三色墨水屏
2. 七寸的相框
	1. 7寸摆台即可
3. arduino uno，flash可以显示40~50张照片，也可以买arduino mega2560（R3），不过价格成几何倍数增长，原因大概是 uno 的国产板已经能够用极低的价格复刻，而mega 2560还做不到。
4. 7.5寸墨水屏配套的e-paper shield扩展板（需要注意！！！要买能够插入SD卡的款式，相较于无SD卡槽的贵了一丢丢）
	1. 微雪的e-paper电子屏扩展板兼容arduino
5. 一张白色卡纸，需要比7.5寸大。
6. 一个sd卡（小的款式，不然插不进扩展板）（存储照片，所需内存很小，1G够用了）
7. sd卡读卡器

## 2. 代码实现(arduino)

1. 微雪官网例程（在我的Arduino文件夹中），找到电子纸驱动示例 链接：https://pan.baidu.com/doc/share/~7sIOqxZ_aXH6M9ocb4rYw-9686129293327 提取码：mcmk
2. 选取7.5寸，分辨率为640\*384的例程代码，不同屏幕及扩展板对应可能不一样，需要试试到底用哪个例程代码。![[Pasted image 20250409115449.png]]
3. 最终测试，发现epd7in5bc可以使用。
4. 然后在EPD库（旧版本，新版本还没试过）中找到examples文件夹，找到对应例程代码（我是epd7in5bc-demo），其中已具备读取SD卡中.bmp文件的例程。  
note：需要将整个EPD文件放置于arduino的library中~
5. 参考我的InkAlbum文件夹中的arduino程序，就可以编写自己的相册代码啦！


特别感谢哔站up：[EvilMorty100](https://space.bilibili.com/34469855)，给予我很大帮助，他的水墨相册制作视频链接：
https://www.bilibili.com/video/BV1JU4y1U7s2/?spm_id_from=333.1387.top_right_bar_window_history.content.click&vd_source=15a5c2466def713999c9b648ebbac086
