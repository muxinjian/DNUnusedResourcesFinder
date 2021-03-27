# DNUnusedResourcesFinder
Mac应用程序，用于在Xcode项目中查找未使用的图像和资源。 通过文件类型配置查找未被使用的资源
忽略近似资源
以及缺失资源提示功能

## Example

![DNUnusedResourcesFinder Example1](https://s31.aconvert.com/convert/p3r68-cdx67/69nb3-8awen.gif)  
## Usage

DNUnusedResourcesFinder 是一款用于检查Xcode项目中未使用的资源简单易用的工具：

单击Browse..以选择一个项目文件夹。
单击Search开始搜索。
等待几秒钟，未使用的资源结果将显示在表格视图中。
点击Waring查看值得特别注意的代码，请在工程中搜索查看避免误删资源或添加缺失的资源；
点击shortage。查看遗漏的资源列表，这些遗漏的资源需要添加你的工程中 或者确认在你的公用模块中存在
```
NSString * aaaa = @"asdsad";
[UIImage imageNamed:aaaa];
[UIImage imageNamed:self.tipLabel.text];
for (int i = 0 ;i <2 ; i++)
{
    [UIImage imageNamed:[NSString stringWithFormat:@"TAG_Contact-%d",i]];
}
```
如上所示的代码可以在控制台log 中查看，⚠️ 的需要格外注意 ❌标示资源缺失需要引入
```
⚠️注意此变量⚠️：imageNamed:self.tipLabel.text] 
2021-03-25 20:23:38.503933+0800 LSUnusedResources[58350:869918] ⚠️注意此变量⚠️：imageNamed:[NSString stringWithFormat:@"TAG_Contact-%d",i]] 
2021-03-25 20:23:39.013275+0800 LSUnusedResources[58350:869159] ❌缺少资源❌：当前文件缺失：  default 
2021-03-25 20:23:39.013361+0800 LSUnusedResources[58350:869159] 
✅JXXXModule 扫描完成✅
```
## Requirements

Requires OS X 10.7 and above, ARC.
