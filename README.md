# CS158 数据结构（荣誉）课程项目

## 内容概要

本学期大作业要求同学们完成三个任务：

1. vector (10 pts)
2. deque (10 pts)
3. map / B+ tree (15 pts)

实现代码的接口框架与头文件，助教已经给出，同学们需要给出补充完成，给出完整的实现。

同学们需要在每个任务的截止日期前，完成相应任务的实现，并提交到 OJ 上。助教会在截止日期后一段时间内安排 Code Review。

**注意：对于每个任务，在 OJ 上通过测试数据可获得 80% 的分数，Code Review 占 20% 的分数。**

关于本地测试，请点击“[如何测试你的代码](#如何测试你的代码)”。

关于在线评测，OJ 地址：[http://oj.oscardhc.com](http://oj.oscardhc.com)，详见[评测及提交方式](#评测及提交方式)

关于迟交惩罚，请点击“[迟交惩罚](#迟交惩罚)”

## 发布时间 & 截止时间

1. vector: 发布时间：第二周周四(3月12日)；截止时间：**第五周周三(4月1日)  22:00**
2. deque: 发布时间：第四周周四(3月26日)；截止时间：**第八周周三(4月22日)  22:00**
3. map / B+ tree: 发布时间：第九周周四(4月30日)；截止时间：**第十四周周三(6月4日) 22:00**

请大家严格把握好时间！建议尽早开工尽早完成！

## 文件说明

以 vector 为例，在 vector 文件夹下分别有数据和接口文件。

* **其中 `vector.hpp` 是你仅需要实现的文件，也是最终提交的代码。**

* `exceptions.hpp` 与 `utility.hpp` 是两个辅助文件(**不可修改**)，提供了异常处理类与 pair 类，你可以在你的代码中自由使用。
* data 文件夹中有多组测试数据，分别位于各个文件夹中。其中标有 "memcheck" 的数据是用来进行**内存泄漏检查**的。

## 任务说明

### vector

补充完成一个 vector 类，你需要实现的接口有：

* 构造函数，析构函数
* 重载赋值运算
* 下标访问
* `front()`, `back()`, `empty()`, `size()`, `clear()`
* `insert`, `erase`
* `push_back()`, `pop_back()`
* 迭代器及其相关操作

测试数据比较宽松，请大家放心写代码。

### deque

补充完成一个 deque 类，接口与 vector 基本一致。

**注意**：deque 要求支持以不超过 `O(sqrt(n))` 的时间完成***任意位置***的插入和删除，但随机访问的复杂度要求降低为 `O(sqrt(n))`

**注意：OJ 上的 deque 测试对速度要求很高，很可能本地测试通过之后在 OJ 上疯狂 TLE，请明白*这并不是因为 OJ 挂了*。** 

### map

补充完成一个 map 类，你需要实现的接口有：

* 构造函数，析构函数
* 重载赋值运算
* 下标访问
* `empty()`, `size()`, `clear()`
* `insert`, `erase`
* `find`
* 迭代器及其相关操作

**注意：普通二叉查找树可以通过 mapB 的全部测试，而不能通过 mapA 的测试。平衡树可以通过 mapA 的测试。**

### B+ tree

待补充

## 如何测试你的代码？

以 vector 为例，若要在本地测试，请将你的代码 `vector.hpp`、相应测试点下的 cpp 文件 `code.cpp`  和 `class-bint.hpp`, `class-integer.hpp`, `class-matrix.hpp`, `utility.hpp`, `exceptions.hpp` 放在同一个目录下编译运行。

### 内存泄漏？

如果你想在本地测试自己的代码是否存在内存泄漏，请点击[如何检测内存泄漏？](https://github.com/MasterJH5574/CS158-DS-Project/blob/master/tutorials/detect-memory-leak/detect-memory-leak.md)

当然，**你不一定非要在自己电脑上测**，很多人也选择不在本地测，比如你们的傅凌玥学姐。如果你提交的代码中存在内存泄漏，OJ 会告诉你的。

## 评测及提交方式

评测采用 OJ 在线评测的方式，请在 OJ 上用学号注册账号，在 problem 中找到相应题目，提交你的代码。

OJ 地址：[http://oj.oscardhc.com](http://oj.oscardhc.com)

***特别注意：提交的题为 "vector(Honor)" 和 "deque(Honor)"，请大家不要交错题了！***

* 以 vector 为例，你只需要将你 `vector.hpp` 中的代码贴到 OJ 上提交即可
* 评测**开 O2 优化**
* 关于题目说明中的“Time Limit”：以 vector 为例，题目说明里 vector 的时限为 5s，指的是**跑完 one, two, three 三个目录下的 code.cpp 的总时间不能超过 5s**。
* 由于 Valgrind 内存检测会导致程序运行时间增长，**OJ 上的 Memory Check 会相应扩大时限**。参见这个 issue：[https://github.com/MasterJH5574/CS158-DS-Project/issues/1](https://github.com/MasterJH5574/CS158-DS-Project/issues/1)

## 迟交惩罚

**如有特殊情况不能在截止时间前完成提交，请主动提前联系助教，否则按迟交处理。**

在截止时间后第一天内提交，扣一分；在第二天内提交，扣两分……在第 i 天内提交，扣 i 分，扣完为止。